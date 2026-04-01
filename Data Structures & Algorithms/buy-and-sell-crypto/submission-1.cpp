class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int lowest = 101;
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
