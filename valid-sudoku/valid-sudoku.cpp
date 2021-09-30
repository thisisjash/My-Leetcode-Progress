class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector <int> vec (9, -1);
        // int arr [3] = {0, 3, 6}
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board [i][j] == '.')
                    continue;
                else {
                    if (vec [board [i][j] - '0' - 1] == -1)
                        vec [board [i][j] - '0' - 1] = 1;
                    else
                        return false;
                }
            }
            vec.assign (9, -1);
        }
        
        for (int j = 0; j < 9; j++) {
            for (int i = 0; i < 9; i++) {
                if (board [i][j] == '.')
                    continue;
                else {
                    if (vec [board [i][j] - '0' - 1] == -1)
                        vec [board [i][j] - '0' - 1] = 1;
                    else
                        return false;
                }
            }
            vec.assign (9, -1);
        }

        for (int m = 0; m < 7; m += 3) {
            for (int n = 0; n < 7; n += 3) {
                for (int i = m; i < m + 3; i++) {
                    for (int j = n; j < n + 3; j++) {
                        if (board [i][j] == '.')
                            continue;
                        else {
                            if (vec [board [i][j] - '0' - 1] == -1)
                                vec [board [i][j] - '0' - 1] = 1;
                            else
                                return false;
                        }
                    }
                }
                vec.assign (9, -1);
            }
        }
        
        return true;
    }
};