class Solution {
  public:
    int numOfPairs(vector < string > & a, string b) {
      map < string, int > m;
      
      int l = a.size(), i;
      
      for (i = 0; i < l; i++) {
        m[a[i]]++;
      }
      
      int ans = 0;
      
      for (auto i: m) {
        int l1 = (i.first).length();
        
        string s = b.substr(0, l1);
        
        if (s == i.first && l1 < b.length()) {
          string s2 = b.substr(l1, b.length());
          
          if (m[s2] > 0) {
            if (s2 == i.first) {
              ans += (m[s2] * (m[s2] - 1));
            } 
            else {
              ans += m[s2] * m[i.first];
            }
          }
        }
      }
      return ans;
    }
};