class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) {
            return 0;
        }
        int lowest = prices[0];
        int max_profit=0;
        for (int i=1; i<prices.size(); i++) {
            int price = prices[i];
            max_profit = max(max_profit, price - lowest);
            lowest = min(lowest, price);
        }

        return max_profit;
    }
};
