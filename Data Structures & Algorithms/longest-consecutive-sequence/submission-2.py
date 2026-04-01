class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:

        count = defaultdict(int)
        out = 0
        
        for n in nums:
            if not count[n]:
                count[n] = count[n - 1] + count[n + 1] + 1
                count[n - count[n - 1]] = count[n]
                count[n + count[n + 1]] = count[n]
                out = max(out, count[n])

        return out

