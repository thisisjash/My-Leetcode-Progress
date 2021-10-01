class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size (), n = nums2.size ();
        int t = (m + n)/2;
        int a = (1 & (m + n));
        int i = 0, j = 0, k = -1;
        vector <double> vec;

        // cout << a;

        while (i < m && j < n) {
            if (nums1 [i] <= nums2 [j]) {
                vec.push_back (nums1 [i++]);
                if (++k == t) {
                    if (a)
                        return vec [k];
                    else
                        return (vec [k] + vec [k - 1])/2;
                }
            }
            else {
                vec.push_back (nums2 [j++]);
                if (++k == t) {
                    if (a)
                        return vec [k];
                    else 
                        return (vec [k] + vec [k - 1])/2;
                }
            }
        }
        
        while (i < m) {
            vec.push_back (nums1 [i++]);
            if (++k == t) {
                if (a)
                    return vec [k];
                else
                    return (vec [k] + vec [k - 1])/2;
            }
        }
        while (j < n) {
            vec.push_back (nums2 [j++]);
            if (++k == t) {
                if (a)
                    return vec [k];
                else {
                    cout << vec [k] << " " << vec [k - 1] << " "  << (vec [k] + vec [k - 1])/2 << endl;
                    return (vec [k] + vec [k - 1])/2;
                }
                    
            }
        }
        
        return 0;
    }
};