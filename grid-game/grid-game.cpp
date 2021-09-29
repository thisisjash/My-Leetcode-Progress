class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long n = grid[0].size (), smallest = INT_MAX;
        if (n == 1)
            return 0;
        else if (n == 2)
            return min (grid [0][1], grid [1][0]);
        vector <long long> presum2 (n, 0);
        vector <long long> presum3 (n, 0);
        
        presum2 [0] = grid [1][0];
        presum3 [n - 1] = grid [0][n - 1];
        
        for (long long i = 1; i < n; i++) {
            presum2 [i] = presum2 [i - 1] + grid [1][i];
            presum3 [n - 1 - i] = presum3 [n - i] + grid [0][n - 1 - i];
        }

        smallest = min (presum3 [1], presum2 [n - 2]);

        for (long long i = 1; i < n - 1; i++) {
            if (smallest > max (presum3 [i + 1], presum2 [i - 1])) {
                smallest = max (presum3 [i + 1], presum2 [i - 1]);
            }
        }
                                
        return smallest;  
    }
};