class Solution {
public:
    int money (vector <int>& robbed, vector <int>& nums, int n, bool trigger) {
        if (n == 1) {
            if (trigger) {
                robbed [n] = nums [0];
                return robbed [n];
            }
            else
                return 0;
        }
        else if (n == 2) {
            robbed [n] = nums [1];
            return robbed [n];
        }
        else if (n == 3) {
            if (trigger) {
                robbed [n] = nums [0] + nums [2];
                return robbed [n];
            }
            else {
                robbed [n] = nums [2];
                return robbed [n];
            }
        }
        else {
            if (robbed [n] == -1) {
                robbed [n] = nums [n - 1] + max (money (robbed, nums, n - 2, trigger), money (robbed, nums, n - 3, trigger));
                return robbed [n];
            }
            else 
                return robbed [n];
        }
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size ();
        
        if (n == 1)
            return nums [0];
        else if (n == 2)
            return max (nums [0], nums [1]);
        else if (n == 3)
            return max (nums [0], max (nums [1], nums [2]));
       
        vector <int> robbed (n + 2, -1);
        vector <int> robbed1 (n + 2, -1);
        
        return max (money (robbed1, nums, n - 1, true), max (money (robbed, nums, n, false), money (robbed1, nums, n, true) - nums [n - 1]));
    }
};