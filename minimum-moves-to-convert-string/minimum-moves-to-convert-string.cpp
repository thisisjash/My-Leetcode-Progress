class Solution {
public:
    int minimumMoves(string s) {
        int cnt = 0, cnt1 = 0;
        string t = s;
//         for (int i = 2; i < s.length (); ) {
//             if (s [i] == 'X' || s [i - 1] == 'X' || s [i - 2] == 'X') {
//                 s [i] = s [i - 1] = s [i - 2] = 'O';
//                 cnt++;
//             }
//             if (i + 3 < s.length ()) 
//                 i += 3;
//             else if (i + 2 < s.length ())
//                 i += 2;
//             else
//                 i++;
//         }
        
//         s = t;
        
//         for (int i = s.length () - 3; i > -1; ) {
//             if (s [i] == 'X' || s [i + 1] == 'X' || s [i + 2] == 'X') {
//                 s [i] = s [i + 1] = s [i + 2] = 'O';
//                 cnt1++;
//             }
//             if (i - 3 > -1 ) 
//                 i -= 3;
//             else if (i - 2 > -1)
//                 i -= 2;
//             else
//                 i--;
//         }
//         return min (cnt, cnt1); 
        for (int i = 0; i < s.length (); ) {
            if (s [i] == 'X') {
                cnt++;
                i += 2;
            }
            i++;
        }
        
        return cnt;
    }
};