class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m = dungeon.size (), n = dungeon[0].size ();
        int DP [m][n];
        
        DP [m - 1][n - 1] = dungeon [m - 1][n - 1] > 0 ? 1 : abs (dungeon [m - 1][n - 1]) + 1;
        
        for (int i = m - 2; i > -1; i--) {
            DP [i][n - 1] = max ((DP [i + 1][n - 1] - dungeon [i][n - 1]), 1);
        }
        
        for (int j = n - 2; j > -1; j--) {
            DP [m - 1][j] = max ((DP [m - 1][j + 1] - dungeon [m - 1][j]), 1);
        }
        
        for (int i = m-2; i >= 0; i--) {
            for (int j = n-2; j >= 0; j--) {
                int min_pow = min (DP[i+1][j], DP[i][j+1]);
                DP[i][j] = max (min_pow - dungeon [i][j], 1);
            }
         }

         return DP[0][0];
        }
};