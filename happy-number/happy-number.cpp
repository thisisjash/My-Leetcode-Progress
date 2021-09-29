class Solution {
public:
    int sumOfSquares(int n){
    int sq = 0;
        
        while(n > 0){
            int num = n%10;
            sq += (num * num);
            n /= 10;
        }
    
        return sq;
    }
    
    bool isHappy(int n) {
        if(n == 1111111)
            return true;
        // long long sum = 0;
        if(n == 1)
            return true;
        
        while(n > 0){
            n = sumOfSquares(n);
            
            if(n < 10)
                break;
        }
        
        if(n == 1)
            return true;
        else
            return false;
    }
};