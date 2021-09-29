class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size ();
        if (n == 0)
            return 0;
        int val = nums [0], i, j = 1;
        for (i = 1; i < n; i++) {
            if (nums [i] != val) {
                val = nums [i];
                nums [j++] = nums [i];
            }
        }
        return j;
    }
};