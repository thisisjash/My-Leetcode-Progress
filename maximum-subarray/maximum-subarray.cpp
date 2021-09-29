class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxNow = INT_MIN, maxEnd = 0; 
        
        for (int i = 0; i < nums.size(); i++) 
       { 
           maxEnd = maxEnd + nums[i]; 
           
            if(maxNow < maxEnd)
                maxNow = maxEnd;
            
            if(maxEnd < 0)
                maxEnd = 0;
       } 
       return maxNow; 
    }
};