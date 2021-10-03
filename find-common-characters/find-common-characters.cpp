class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map <char, int> freq, temp;
        vector <string> ans;
        string str;
        
        for (int i = 0; i < words.size (); i++) {
            for (int j = 0; j < words [i].length (); j++) {
                temp [words [i][j]]++;
            }
            if (i == 0)
                freq = temp;
            else {
                for (auto i: freq) {
                    freq [i.first] = min (i.second, temp [i.first]);
                }
            }
            temp.clear ();
        }
        
        for (auto i: freq) {
            while (i.second > 0) {
                string s(1, i.first);
                ans.push_back (s);
                i.second--;
            }
        }
        
        return ans;
    }
};