class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m = mat.size ();
        int n = mat [0].size ();

        cout << m << n << r << c;
        
        if ((m * n) != (r * c))
            return mat;
        
        vector <vector <int>> ans (r, vector <int> (c, 0));
        vector <int> vec;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                vec.push_back (mat [i][j]);
            }
        }
        
        for (int i = 0, k = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                ans [i][j] = vec [k++];
            }
        }
        
        return ans;
    }
};