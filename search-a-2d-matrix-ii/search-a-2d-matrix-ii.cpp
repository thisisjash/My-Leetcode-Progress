class Solution {
public:
    pair <int, int> find_coord (int x, int i, int j) {
        return make_pair ((x/j), x % j);
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size (), n = matrix [0].size ();

        for (int i = 0; i < matrix.size (); i++) {
            if (matrix [i][0] > target) 
                continue;
            if (matrix [i][n - 1] < target)
                continue;
            int low = n * i , high = (n * (i + 1)) - 1;
            while (low <= high) {
                int mid = low + (high - low)/2;
                pair <int, int> x = find_coord (mid, m, n);

                if (matrix [x.first][x.second] == target)
                    return true;
                else if (matrix [x.first][x.second] > target) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
        }
        return false;
    }
};