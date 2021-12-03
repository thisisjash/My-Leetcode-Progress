class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector <int> ans (nums.size (), -1);
        
        if (nums.size () <= (2*k))
            return ans;
        
        long int sum = 0;
        
        for (int i = 0; i < k; i++) {
            sum += nums [i];
        }
        
        for (int i = k + 1; i <= (2*k); i++) {
            sum += nums [i];
        }
        
        for (int i = k; i + k < nums.size (); i++) {
            if (i == k) {
                sum += nums [i];
                ans [i] = sum/((2*k) + 1);
                continue;
            }
            sum -= nums [i - k - 1];
            sum += nums [i + k];
            ans [i] = sum/((2*k) + 1);
        }
        
        return ans;
    }
};