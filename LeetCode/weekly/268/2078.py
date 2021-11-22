class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        last_color = colors[-1]
        first_color = colors[0]
        maxd = 0
        for i,color in enumerate(colors):
            if color != last_color:
                maxd = len(colors) - 1 - i
                break
        for i in range(1,len(colors)+1):
            d = 0
            if colors[-i] != first_color:
                d = len(colors) - i
                if d > maxd:
                    maxd = d
                break
        return maxd
