class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, int> rec;
        unordered_map <int, int> freq;
        int n = nums.size ();
        
        for (int i = 0; i < n; i++) {
            if (freq [nums [i]] == 0) {
                rec [nums [i]] = i;
                freq [nums [i]]++;
            }
            else {
                if (nums [i] == nums [rec [nums [i]]]) {
                    if (i - rec [nums [i]] <= k) {
                        cout << i;
                        return true;
                    }    
                    else {
                        rec [nums [i]] = i;
                    }
                }
            }
        }
        return false;
    }
};