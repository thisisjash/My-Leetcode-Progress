class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int trigger = 0, neg = 0;
        
        for (int i = 0; i < s.length (); i++) {
            if (trigger == 0) {
                if (s [i] == ' ')
                    continue;

                if (s [i] == '-') {
                    trigger = 1;
                    neg = 1;
                    continue;
                }
                
                if (s [i] == '+') {
                    trigger = 1;
                    neg = 0;
                    continue;
                }
                
                if (s [i] >= 48 && s [i] <= 57) {
                    trigger = 1;
                    ans = (ans * 10) + s [i] - '0';
                    continue;
                }
            }
            
            if (s [i] >= 48 && s [i] <= 57) {
                ans = (ans * 10) + s [i] - '0';
                
                if (ans > 2147483648) {
                    ans = 2147483648;
                    break;
                }
                continue;
            }
            
            else
                break;
        }

        cout << neg << " " << ans << endl;

        if (ans == 2147483648) {
            cout << "**";
            if (neg) {
                cout << "*";
                ans = -ans;
                return ans;
            }
            else
                return --ans;
        }
        
        if (neg)
            ans = -ans;
        
        return ans;
    }
};