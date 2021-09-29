class Solution {
public:
    int fibNum [32] = {0};

    int fib(int n) {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else {
            if (fibNum [n] == 0) {
                fibNum [n] = fib (n - 1) + fib (n - 2);
                return fibNum [n];
            }
            else {
                return fibNum [n];
            }
        }
    }
};