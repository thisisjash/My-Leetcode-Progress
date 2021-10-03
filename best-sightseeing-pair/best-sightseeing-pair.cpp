class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        long int val = 0, ans = 0, n = values.size ();
        
        for (int i = 0; i < n; i++) {
            ans = (ans > val + values [i] - i) ? ans :val + values [i] - i;
            val = (val > values [i] + i) ? val : values [i] + i;
        }
        return ans;
    }
};