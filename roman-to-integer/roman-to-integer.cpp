class Solution {
public:
    int romanToInt(string s) {
        int i = s.length () - 1, ans = 0;
        
        while (s [i] == 'I') {
            ans++;
            i--;
            if (i < 0)
                return ans;
        }
            
        
        if (s [i] == 'V') {
            ans += 5;
            i--;
            if (i < 0)
                return ans;
        }
        
        while (s [i] == 'I') {
            ans--;
            i--;
            if (i < 0)
                return ans;
        }
        
        if (s [i] == 'X') {
            ans += 10;
            i--;
            if (i < 0)
                return ans;
        }
        
        while (s [i] == 'I') {
            ans--;
            i--;
            if (i < 0)
                return ans;
        }
        
        while (s [i] == 'X') {
            ans += 10;
            i--;
            if (i < 0)
                return ans;
        }
        
        if (s [i] == 'L') {
            ans += 50;
            i--;
            if (i < 0)
                return ans;
        }
        
        while (s [i] == 'X') {
            ans -= 10;
            i--;
            if (i < 0)
                return ans;
        }
        
        if (s [i] == 'C') {
            ans += 100;
            i--;
            if (i < 0)
                return ans;
        }
        
        while (s [i] == 'X') {
            ans -= 10;
            i--;
            if (i < 0)
                return ans;
        }
        
        while (s [i] == 'C') {
            ans += 100;
            i--;
            if (i < 0)
                return ans;
        }
        
        if (s [i] == 'D') {
            ans += 500;
            i--;
            if (i < 0)
                return ans;
        }
        
        while (s [i] == 'C') {
            ans -= 100;
            i--;
            if (i < 0)
                return ans;
        }
        
        if (s [i] == 'M') {
            ans += 1000;
            i--;
            if (i < 0)
                return ans;
        }
        
        while (s [i] == 'C') {
            ans -= 100;
            i--;
            if (i < 0)
                return ans;
        }
        
        while (s [i] == 'M') {
            ans += 1000;
            i--;
            if (i < 0)
                return ans;
        }
        
        return ans;
    }
};