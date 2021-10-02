class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector <vector <int>> ans;
        vector <int> vec (1, 1);
        vector <int> temp;
        ans.push_back (vec);
        
        if (n == 1) {
            return ans;
        }
        
        vec.push_back (1);
        ans.push_back (vec);
        
        if (n == 2) {
            return ans;
        }
        
        for (int i = 2; i < n; i++) {
            temp.push_back (1);
            for (int j = 1; j < i; j++) {
                temp.push_back (vec [j] + vec [j - 1]);
            }
            temp.push_back (1);
            ans.push_back (temp);
            vec = temp;
            temp.clear ();
        }
        
        return ans;
    }
};