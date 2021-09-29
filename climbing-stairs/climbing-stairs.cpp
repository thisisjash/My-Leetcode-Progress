class Solution {
public:
    int steps [50] = {0};
    
    int climbStairs(int n) {
        if (n == 0) {
            return steps [0];
        }
        else if (n == 1) {
            steps [1] = 1;
            return steps [1];
        }
        else if (n == 2) {
            steps [2] = 2;
            return steps [2];
        }
        else {
            if (steps [n] != 0) {
                return steps [n];
            }
            else {
                steps [n] = climbStairs (n - 1) + climbStairs (n - 2);
                return steps [n];
            }
        }
        return 0;
    }
};