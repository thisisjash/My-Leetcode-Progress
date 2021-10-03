class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        long int t = mean * (n + rolls.size ()), sum = 0;
        vector <int> ans;
        
        for (long int i = 0; i < rolls.size (); i++) {
            sum += rolls [i];
        }
        
        t -= sum;
        
        if (t/n > 6) 
            return ans;
        
        if (t/n < 1)
            return ans;
        
        else {
            ans.assign (n, t/n);
            
            int temp = t % n, i = 0;

            cout << t << " *" << n << " " << temp << endl;
            
            while (i < n && temp > 0) {
                while (temp > 0 && ans [i] <= 5) {
                    ans [i]++;
                    temp--;
                }
                i++;
            }
            
            if (temp > 0) {
                ans.clear ();
                return ans;
            } 
        }
        
        return ans;
    }
};