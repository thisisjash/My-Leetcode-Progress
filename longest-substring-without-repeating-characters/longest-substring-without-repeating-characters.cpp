class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char, long int> occ;
        long int n = s.length (), ans = 0, start = 0, len = 0;
        if (n <= 1)
            return n;
        for (long int i = 0; i < n; i++) {
            cout << i << " - " << occ [s [i]] << " - " << start << " - " << len << " - " << ans << endl;
            if ((i != 0) && (s [i] == s [0])) {
                if (occ [s [i]] < start) {
                    len++;
                    occ [s [i]] = i;
                    ans = (ans > len) ? ans : len;
                    cout << i << " - " << occ [s [i]] << " - " << start << " - " << len << " - " << ans << endl;
                }
                else {
                    len = i - occ [s [i]];
                    start = occ [s [i]] + 1;
                    ans = (ans > len) ? ans : len;
                    // cout << len << endl;
                    occ [s [i]] = i;
                    cout << i << " - " << occ [s [i]] << " - " << start << " - " << len << " - " << ans << endl;
                }
            }
            else if (occ [s [i]] == 0) {
                len++;
                occ [s [i]] = i;
                // cout << len << endl;
                ans = (ans > len) ? ans : len;
                cout << i << " - " << occ [s [i]] << " - " << start << " - " << len << " - " << ans << endl;
            }
            else {
                if (occ [s [i]] < start) {
                    len++;
                    occ [s [i]] = i;
                    ans = (ans > len) ? ans : len;
                    // cout << len << endl;
                    cout << i << " - " << occ [s [i]] << " - " << start << " - " << len << " - " << ans << endl;
                }
                else {
                    len = i - occ [s [i]];
                    start = occ [s [i]] + 1;
                    ans = (ans > len) ? ans : len;
                    occ [s [i]] = i;
                    // cout << len << endl;
                    cout << i << " - " << occ [s [i]] << " - " << start << " - " << len << " - " << ans << endl;
                }
            }
        }
        return ans;
    }
};