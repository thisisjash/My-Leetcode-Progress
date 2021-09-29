class Solution {
public:
    int trib [40] = {0};
    
    int tribonacci(int n) {
        if (n == 0) {
            trib [0] = 0;
            return 0;
        }
        else if (n == 1) {
            trib [1] = 1;
            return 1;
        }
        else if (n == 2) {
            trib [2] = 1;
            return 1;
        }
        else {
            if (trib [n] == 0) {
                trib [n] = tribonacci (n - 1) + tribonacci (n - 2) + tribonacci (n - 3);
                return trib [n];
            }
            else
                return trib [n];
        }
    }
};