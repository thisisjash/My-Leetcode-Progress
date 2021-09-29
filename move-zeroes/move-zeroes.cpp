class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //vector<int> :: iterator itr, ritr;
        //vector<int> :: iterator ritr = nums.rbegin();
        int count = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0)
                swap(nums[count++], nums[i]);
        }
        
        for(int i = 0; i < nums.size(); i++)
            cout << nums[i] << " ";
    }
};