class Solution {
public:
    bool canJump(vector<int>& nums) {
        long int maxReach = 0;
        int n = nums.size ();
        for (int i = 0; i < n && i <= maxReach; i++) {
            maxReach = maxReach > (nums [i] + i) ? maxReach : nums [i] + i;
            if (maxReach >= n - 1)
                return true;
        }
        return false;
    }
};