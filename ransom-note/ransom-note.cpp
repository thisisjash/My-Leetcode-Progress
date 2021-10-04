class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char, int> freq;
        
        for (long int i = 0; i < magazine.length (); i++) {
            freq [magazine [i]]++;
        }
        
        for (long int i = 0; i < ransomNote.length (); i++) {
            freq [ransomNote [i]]--;
            
            if (freq [ransomNote [i]] < 0)
                return false;
        }
        
        return true;
    }
};