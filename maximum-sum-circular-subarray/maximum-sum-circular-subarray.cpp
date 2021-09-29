class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        /*vector <int> newvec;
        
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < nums.size(); j++) {
                newvec.push_back (nums[j]);
            }
        }
        
        vector <int> DP (newvec.size(), INT_MIN);
        
        DP[0] = newvec[0];
        
        long int max_so_far = DP[0];
        long int start = 0, end = 0, s = 0;
        
        
        for (int i = 1; i < newvec.size(); i++) {
            if (newvec[i] < DP[i - 1] + newvec[i]) {
                DP[i] = DP[i - 1] + newvec[i];
                end = i;
                
                if (end - s + 1 > nums.size()) {
                    DP[i] -= DP[s];
                    s++;
                }
            }
            else {
                DP[i] = newvec[i];
                s = i;
                end = i;
            }
            
            if (max_so_far < DP[i]) {
                max_so_far = DP[i];
                start = s;
                end = i;
            }
        }*/
        
        int max_so_far = nums[0], sum_now = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            sum_now = max (sum_now + nums[i], nums[i]);
            max_so_far = max (max_so_far, sum_now);
        }
        
        if (max_so_far < 0)
            return max_so_far;
        
        int max_so_far_2 = -nums[0], sum = 0;
        sum_now = -nums[0];
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            nums[i] = -nums[i];
        }
        
        for (int i = 1; i < nums.size(); i++) {
            sum_now = max (sum_now + nums[i], nums[i]);
            max_so_far_2 = max (max_so_far_2, sum_now);
        }
        
        max_so_far_2 = sum + max_so_far_2;
        
        return max(max_so_far, max_so_far_2);
    }
};