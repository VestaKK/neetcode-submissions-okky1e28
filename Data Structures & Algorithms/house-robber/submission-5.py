class Solution:
    def rob(self, nums: List[int]) -> int:
        dp = [0] * len(nums)


        for i, n in enumerate(nums):
            if i == 0:
                dp[i] = nums[i]
            elif i == 1:
                dp[i] = max(dp[i - 1], nums[i])
            else:
                dp[i] = max(dp[i - 2] + nums[i], dp[i - 1])

        if len(nums) == 1:
            return dp[-1]

        return max(dp[-1], dp[-2])
