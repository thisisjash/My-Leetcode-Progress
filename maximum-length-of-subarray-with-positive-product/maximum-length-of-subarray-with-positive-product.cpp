class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        long long pos = 0, neg = 0, ans = 0, n = nums.size ();
        
        for (int i = 0; i < n; i++) {
            if (nums [i] == 0) {
                pos = 0;
                neg = 0;
            }
            else if (nums [i] > 0) {
                pos++;
                
                if (neg)
                    neg++;
                
                ans = (ans > pos) ? ans : pos;
            }
            else {
                swap (pos, neg);
                
                neg++;
                
                if (pos)
                    pos++;
                
                ans = (ans > pos) ? ans : pos;
            }
        }
        return ans;
    }
};