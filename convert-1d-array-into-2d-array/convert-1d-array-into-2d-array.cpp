class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& a, int m, int n) {
        vector<vector<int>> v;
        int l= a.size();
        if(m*n!=l || l==0)
        {
            return v;
        }
        int i,j=0,k;
        vector<int> v1;
        for(i=0;i<l;i++)
        {  
            v1.push_back(a[i]);
            j++;
            if(j == n)
            {
                v.push_back(v1);
                v1.clear();
                j = 0;
            }
        }
        return v;
    }
};