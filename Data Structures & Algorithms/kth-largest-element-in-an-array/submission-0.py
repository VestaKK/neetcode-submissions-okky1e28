class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:

        heap = [(-i, i) for i in nums]
        heapq.heapify(heap)

        for i in range(k - 1):
            heapq.heappop(heap)
        
        
        return heap[0][1]

        