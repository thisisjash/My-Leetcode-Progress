class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size ();
        
        if (n <= 1)
            return 0;
        
        if (nums [0] == 0)
            return -1;
        
        long int maxReach = nums [0], jumps = 1, curr_jump = nums [0];
        
        for (int i = 1; i < n && i <= maxReach; i++) {
            if (i == n - 1)
                return jumps;
            
            maxReach = maxReach > i + nums [i] ? maxReach : i + nums [i];
            
            curr_jump--;
            
            if (!curr_jump) {
                jumps++;
                curr_jump = maxReach - i;
            }    
        }
        return -1;
    }
};