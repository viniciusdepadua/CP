class Solution:
    def wateringPlants(self, plants: List[int], capacity: int) -> int:
        steps = 0
        w = 0
        for i,plant in enumerate(plants):
            if w + plant > capacity:
                steps = steps + 2*i
                w = 0
            steps+=1
            w+=plant
        return steps
