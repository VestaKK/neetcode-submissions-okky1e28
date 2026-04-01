class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:

        heap = [(-i, i) for i in stones]
        heapq.heapify(heap)

        while len(heap) > 1:
            _, x = heapq.heappop(heap)
            _, y = heapq.heappop(heap)

            if x == y:
                continue

            new_stone = max(y - x, x - y)
            heapq.heappush(heap, (-new_stone, new_stone))

        return heap[0][1] if len(heap) == 1 else 0

