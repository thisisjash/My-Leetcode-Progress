class Solution {
public:
    int firstUniqChar(string s) {
        vector <long int> pos (26, -1);
        vector <int> ch (26, -1);
        long int ans = INT_MAX, temp;
        
        for (int i = 0; i < s.length (); i++) {
            if (pos [s [i] - 'a'] == -1)
                pos [s [i] - 'a'] = i;
            
            if (ch [s [i] - 'a'] == -1)
                ch [s [i] - 'a'] = 1;
            else
                ch [s [i] - 'a']++;
        }
        
        for (int i = 0; i < 26; i++) {
            if (ch [i] == 1) {
                temp = pos [i];
                ans = min (ans, temp);
            }
        }
        
        return (ans == INT_MAX) ? -1 : ans;
    }
};