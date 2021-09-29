class Solution {
public:
    int dp [10005] = {0};
    map <int, int> freq;
    
    void ans (int n) {
        if (n == 0)
            return;
        dp [n] = max (dp [n + 2] + (n * freq [n]), dp [n + 1]);
        ans (n - 1);
        return;
    }
    
    int deleteAndEarn(vector<int>& nums) {
        
        int n = nums.size (), max = INT_MIN;
        
        for (int i = 0; i < n; i++) {
            freq [nums [i]]++;
            max = (max < nums [i]) ? nums [i] : max;
        }
        
        ans (max);
        
        return dp [1];
    }
};