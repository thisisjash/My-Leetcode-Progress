class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int trigger = 0, diff = 0, smallest = INT_MAX, greatest = nums [0];
        for (int i = 1; i < nums.size(); i++) {
            
            if (trigger == 0) {
                if (nums [i] < greatest)
                    greatest = nums [i];
                else {
                    smallest = greatest;
                    greatest = nums [i];
                    if (greatest - smallest > diff)
                       diff = greatest - smallest;
                    trigger = 1;
                }
            }
            else {
               if (nums [i] < smallest) {
                   greatest = nums [i];
                   trigger = 0;
               }    
               if (nums [i] > greatest) {
                   greatest = nums [i];
                   if (greatest - smallest > diff)
                       diff = greatest - smallest;
                }
            }
        }
        if (diff) {
            return diff;
        }
        else {
            return -1;
        }
    }
};