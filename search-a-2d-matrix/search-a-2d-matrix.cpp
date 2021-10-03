class Solution {
public:
    pair <int, int> find_coord (int x, int i, int j) {
        // if (x % j) 
        //     return make_pair ((x/j), x % j);
        // else
        //     return make_pair ((x/j), x % j);
        return make_pair ((x/j), x % j);
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size (), n = matrix [0].size ();
        
        int low = 0, high = (m * n) - 1;
        
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
        
        return false;
    }
};