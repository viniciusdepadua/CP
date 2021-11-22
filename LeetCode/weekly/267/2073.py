class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        
        time = 0
        x = tickets[k]
        for i, ticket in enumerate(tickets):
            if ticket < x:
                time += ticket
            elif ticket >= x:
                if i <= k:
                    time+=x
                else:
                    time+=(x-1)
        return time
