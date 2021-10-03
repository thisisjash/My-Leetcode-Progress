class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector <int> max_here (prices.size(), INT_MIN);
        
        int max = INT_MIN;
        
        for (int i = prices.size() - 1; i >= 0; i--) {
            if (prices[i] > max) {
                max = prices[i];
            }
            
            max_here [i] = max;
        }
        
        max = 0;
        
        for (int i = 0; i < prices.size(); i++) {
            if (max < max_here [i] - prices [i]) 
                max = max_here [i] - prices [i];
        }
        
        return max;
    }
};