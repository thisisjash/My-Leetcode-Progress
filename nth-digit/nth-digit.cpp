class Solution {
public:
    vector <long int> range = {9, 189, 2889, 38889, 488889, 5888889, 68888889, 788888889, 8888888889};
    vector <long int> num = {9, 99, 999, 9999, 99999, 999999, 9999999, 99999999, 999999999};

    int findDigit (int n) {
        for (int i = 0; i < 9; i++) {
            if (n <= range [i])
                return i;
        }
        return 0;
    }

    char finalAnswer (long int ans, int digit) {
        string str = to_string (ans);

        if (!(digit))
            return str [str.length () - 1];

        for (int i = 0; i < str.length (); i++) {
            if (i + 1 == digit)
                return str [i];
        }

        return '*';
    }

    int findNthDigit(int n) {
        if (n < 10)
            return n;
        // if (n == 999999999)
        //     return 9;
        // if (n == 77777777)
        //     return 0;
        int k = findDigit (n);
        long int t = n - range [k - 1];
        long int ans = (t/(k + 1)) + num [k - 1];
        int digit = t % (k + 1);
        if (digit == 0)
            return finalAnswer (ans, digit) - '0';
        else 
            return finalAnswer (ans + 1, digit) - '0';
    }
};