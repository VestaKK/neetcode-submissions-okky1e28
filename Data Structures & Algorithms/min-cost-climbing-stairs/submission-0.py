class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:

        if len(cost) == 1:
            return cost[0] + 1

        dp = [0] * len(cost)

        for i, c in enumerate(cost):
            if i == 0:
                dp[i] = cost[i]
            elif i == 1:
                dp[i] = cost[i]
            else:
                dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i]

        return min(dp[-1], dp[-2]) 


