class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:

        def dist(a, b):
            return math.sqrt((a[0] - b[0])**2 + (a[1] + b[1])**2)

        heap = [(dist([0,0], i), i)for i in points]
        heapq.heapify(heap)

        res = []
        for i in range(k):
            res.append(heapq.heappop(heap)[1])
        return res
        