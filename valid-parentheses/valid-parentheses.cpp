class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int n = s.length ();
        
        if (n & 1)
            return false;
        
        for (int i = 0; i < n; i++) {
            if (s [i] == '(' || s [i] == '{' || s [i] == '[') {
                st.push (s [i]);
            }
            else {
                if (st.empty())
                    return false;
                else
                    switch (s [i]) {
                        case ')':
                            if (st.top () == '(') 
                                st.pop ();
                            else
                                return false;
                            break;
                        case '}':
                            if (st.top () == '{') 
                                st.pop ();
                            else
                                return false;
                            break;
                        case ']':
                            if (st.top () == '[') 
                                st.pop ();
                            else
                                return false;
                            break;
                    }
            }
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};