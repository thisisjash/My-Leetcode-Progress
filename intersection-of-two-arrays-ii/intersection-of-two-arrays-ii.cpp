class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> freq;
        int m = nums1.size (), n = nums2.size ();
        vector <int> vec;
        
        for (int i = 0; i < m; i++)
                freq [nums1 [i]]++;
        
        for (int i = 0; i < n; i++) {
            if (freq [nums2 [i]] > 0)
                vec.push_back (nums2 [i]);
            freq [nums2 [i]]--;
        }
        
        return vec;
    }
};