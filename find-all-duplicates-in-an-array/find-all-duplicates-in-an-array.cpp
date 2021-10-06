class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map <long int, long int> freq;
        vector <int> vec;
        
        for (int i = 0; i < nums.size (); i++) {
            freq [nums [i]]++;
        }

        for (auto itr: freq) {
            if (itr.second > 1)
                vec.push_back (itr.first);
        }
        
        return vec;
    }
};