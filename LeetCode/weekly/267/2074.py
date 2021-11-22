# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseEvenLengthGroups(self, head: Optional[ListNode]) -> Optional[ListNode]:
        def reverse(before_init, after_end):
            prev = after_end
            head = before_init.next
            curr = head
            after = None
            while curr!=after_end:
                after = curr.next
                curr.next = prev
                prev = curr
                curr = after
            before_init.next = prev
            
            
        node = head
        group = 1
        node_number = 1
        before_init = None
        after_end = None
        init = 0
        while node!= None:
            if group % 2 == 1:
                if node_number == group:
                    before_init = node
                    before_init_flag = before_init.next
                    node_number = 0
                    group+=1
                    init = node_number+1
                    node = node.next
                else:
                    node = node.next
            else:
                if node_number == group:
                    after_end = node.next
                    reverse(before_init,after_end)
                    node_number = 0
                    group+=1
                    init = node_number + 1
                    node = after_end
                else:
                    node = node.next
            node_number+=1
            if node == None:
                if node_number-init:
                    if (node_number-init) % 2 == 0 :
                        if group%2 == 1:
                            reverse(before_init_flag, None)
                        else:
                            reverse(before_init, None)
        return head
