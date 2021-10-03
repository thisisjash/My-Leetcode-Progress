class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int ans = 0;
        
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board [i][j] == 'R') {
                    for (int k = j + 1; k < 8; k++) {
                        if (board [i][k] == '.')
                            continue;
                        else if (board [i][k] == 'B')
                            break;
                        else {
                            ans++;
                            break;
                        }
                    }
                    
                    for (int k = j - 1; k > -1; k--) {
                        if (board [i][k] == '.')
                            continue;
                        else if (board [i][k] == 'B')
                            break;
                        else {
                            ans++;
                            break;
                        }
                    }
                    
                    for (int k = i + 1; k < 8; k++) {
                        if (board [k][j] == '.')
                            continue;
                        else if (board [k][j] == 'B')
                            break;
                        else {
                            ans++;
                            break;
                        }
                    }
                    
                    for (int k = i - 1; k > -1; k--) {
                        if (board [k][j] == '.')
                            continue;
                        else if (board [k][j] == 'B')
                            break;
                        else {
                            ans++;
                            break;
                        }
                    }
                    return ans;
                }
            }
        }
        
        return ans;
    }
};