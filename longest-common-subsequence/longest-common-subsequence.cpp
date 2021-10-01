class Solution {
public:
    
    
    int lcs (string str1, string str2, int m, int n) {
        int arr [m + 1][n + 1];
        
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0)
                    arr [i][j] = 0;
                else if (str1 [i - 1] == str2 [j - 1])
                    arr [i][j] = 1 + arr [i - 1][j - 1];
                else
                    arr [i][j] = max (arr [i - 1][j], arr [i][j - 1]);
                    
            }
        }
        
        return arr [m][n];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        return lcs (text1, text2, text1.length (), text2.length ());
    }
};