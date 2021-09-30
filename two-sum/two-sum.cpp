class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <long int, vector <int>> pos;
        vector <long int> unq;
        map <long int, long int> ans;
        map <long int, long int> :: iterator itr;
        vector <int> res;
        int n = nums.size ();
        
        for (int i = 0; i < n; i++) {
            if (pos [nums [i]].size () == 0) {
                pos [nums [i]].push_back (i);
                unq.push_back (nums [i]);
                ans [nums [i]] = target - nums [i];
            }
            else if (pos [nums [i]].size () == 1) {
                pos [nums [i]].push_back (i);
                if (2 * nums [i] == target)
                    return pos [nums [i]];
            }
            else
                continue;
        }
        
        if (nums [0] == target) {
            if (! pos [0].empty ()) {
                res.push_back (0);
                res.push_back (pos [0][0]);
                return res;
            }
                // return {0, pos [0][0]};
        }
        
        if (nums [0] == 0) {
            if (! pos [target].empty ()) {
                res.push_back (0);
                res.push_back (pos [target][0]);
                return res;
            }
                // return {0, pos [target][0]};
        }
        
        if (!(pos [target].empty ()) && !(pos [0].empty ())) {
            res.push_back (pos [target][0]);
            res.push_back (pos [0][0]);
            return res;
        }
            
        for (itr = ans.begin (); itr != ans.end (); itr++) {
            if (ans [itr -> second] == itr -> first) {
                res.push_back (pos [itr -> second][0]);
                res.push_back (pos [itr -> first][0]);
                return res;
            }
        }
        return res;
    }
};