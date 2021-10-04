class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int profit = 0, sells = - prices [0];
        
        for (int i = 0; i < prices.size (); i++) {
            profit = max (profit, sells + prices [i] - fee);
            sells = max (sells, profit - prices [i]);
        }
        return profit;
    }
};