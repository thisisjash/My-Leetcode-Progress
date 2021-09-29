class Solution {
public:    
    int money (vector <int>& robbed, vector <int>& nums, int n) {
        if (n == 1) {
            robbed [n] = nums [0];
            // cout << n << " " << robbed [n] << "\n";
            return robbed [n];
        }
        else if (n == 2) {
            robbed [n] = nums [1];
            // cout << n << " " << robbed [n] << "\n";
            return robbed [n];
        }
        else if (n == 3) {
            robbed [n] = nums [2] + nums [0];
            // cout << n << " " << robbed [n] << "\n";
            return robbed [n];
        }
        else {
            if (robbed [n] == -1) {
                robbed [n] = nums [n - 1] + max (money(robbed, nums, n - 2), money (robbed, nums, n - 3));
                // cout << n << " " << robbed [n] << "\n";
                return robbed [n];
            }
            else
                return robbed [n];
        }
    }
    
    int rob(vector<int>& nums) {
        vector <int> robbed (nums.size () + 2, -1);
        if (nums.size () == 1)
            return nums [0];
        else if (nums.size () == 2)
            return max (nums [0], nums [1]);
        else if (nums.size () == 3)
            return max (nums [0] + nums [2], nums [1]);
        else
            return max (money (robbed, nums, nums.size ()), money (robbed, nums, nums.size () - 1));
    }
};