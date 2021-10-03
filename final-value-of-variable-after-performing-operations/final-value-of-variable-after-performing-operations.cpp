class Solution {
public:
    int finalValueAfterOperations(vector<string>& arr) {
        int ans = 0, n = arr.size ();
        
        for (int i = 0; i < n; i++) {
            if (arr [i][0] == 'X') {
                if (arr [i][2] == '+')
                    ans++;
                else
                    ans--;
            }
            else {
                if (arr [i][0] == '+')
                    ans++;
                else
                    ans--;
            }
        }
        
        return ans;
    }
};