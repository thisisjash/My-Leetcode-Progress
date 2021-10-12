/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int num) {
        long int ans, low, high;
        int val = -1;
        
        while (val) {
            ans = low + (high - low)/2;
            val = guess (ans);
            if (val == -1)
                high = ans - 1;
            else if (val == 1)
                low = ans + 1;
            else
                return ans;
        }
        
        return ans;
    }
};