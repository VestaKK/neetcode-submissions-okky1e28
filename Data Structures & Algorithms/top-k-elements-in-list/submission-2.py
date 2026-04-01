class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        heap = [] 
        res = []

        nums.sort()

        count = 0
        curr = nums[0]

        for i in nums:
            if curr != i:
                heapq.heappush(heap, (-count, curr))
                curr = i 
                count = 1
            else:
                count += 1         
        heapq.heappush(heap, (-count,curr))

        while k != 0:
            count, val = heapq.heappop(heap)
            res.append(val)
            k -= 1
            
        return res
