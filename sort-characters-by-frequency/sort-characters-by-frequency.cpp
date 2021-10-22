class Solution {
public:
    static bool cmp (pair <char, long int> p1, pair <char, long int> p2) {
        return p1.second > p2.second;
    }
    
    string frequencySort(string s) {
        vector <pair <char, long int>> res;
        map <char, long int> freq;
        string str;
        long int temp;
        
        for (int i = 0; i < s.length (); i++) {
            freq [s [i]]++;
        }
        
        for (auto& itr: freq) {
            res.push_back (itr);
        }
        
        sort (res.begin (), res.end (), cmp);
        
        for (int i = 0; i < res.size (); i++) {
            str.append (res [i].second, res [i].first);
        }
        
        cout << endl;
        
        return str;
    }
};