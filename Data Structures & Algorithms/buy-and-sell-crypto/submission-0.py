class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        out = 0
        n = len(prices)
        lmin, i = prices[0], 0

        while i < n:
            lmin = min(lmin, prices[i])
            out = max(prices[i] - lmin, out)
            i += 1
        return out

