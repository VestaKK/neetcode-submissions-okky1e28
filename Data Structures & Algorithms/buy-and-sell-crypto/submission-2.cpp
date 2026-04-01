class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if (prices.size() < 2) {
            return 0;
        }

        int lowest = prices[0];
        int max_profit=0;
        for (int price : prices) {

            if (price < lowest) { 
                lowest = price;
                continue;
            } else {
                max_profit = max(max_profit, price - lowest);
            }
        }

        return max_profit;
    }
};
