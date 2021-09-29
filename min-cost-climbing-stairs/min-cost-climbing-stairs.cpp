class Solution {
public:
    int costReq [1005] = {0};
    
    int costOccur (vector <int> &cost, int n) {
        if (n == 0)
            return cost [0];
        else if (n == 1)
            return cost [1];
        else {
            if (costReq [n] == 0) {
                costReq [n] = cost [n] + min (costOccur (cost, n - 1), costOccur (cost, n - 2));
                return costReq [n];
            }
            else
                return costReq [n];
        }
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min (costOccur (cost, cost.size () - 1), costOccur (cost, cost.size () - 2));
    }
};