class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j, k, n = nums.size () ;
        for (i = 1, j = 1, k = 1; i < n;) {
            if (nums [i] == nums [i - 1] && k < 2) {
                nums [j++] = nums [i++];
                k++;
            }
            else if (nums [i] == nums [i - 1]) {
                i++;
            }
            else {
                nums [j++] = nums [i++];
                k = 1;
            }
        }
        return j--;
    }
};