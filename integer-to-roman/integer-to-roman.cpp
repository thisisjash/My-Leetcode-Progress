class Solution {
public:
    string unitDigit (int temp) {
        switch (temp) {
            case 1:
                return "I";
            case 2:
                return "II";
            case 3:
                return "III";
            case 4:
                return "IV";
            case 5:
                return "V";
            case 6:
                return "VI";
            case 7:
                return "VII";
            case 8:
                return "VIII";
            case 9:
                return "IX";
            case 0:
                return "";  
        }
        return "";
    }
    
    string tensDigit (int temp) {
        switch (temp) {
            case 1:
                return "X";
            case 2:
                return "XX";
            case 3:
                return "XXX";
            case 4:
                return "XL";
            case 5:
                return "L";
            case 6:
                return "LX";
            case 7:
                return "LXX";
            case 8:
                return "LXXX";
            case 9:
                return "XC";
            case 0:
                return "";  
        }
        return "";
    }
    
    string hundredsDigit (int temp) {
        switch (temp) {
            case 1:
                return "C";
            case 2:
                return "CC";
            case 3:
                return "CCC";
            case 4:
                return "CD";
            case 5:
                return "D";
            case 6:
                return "DC";
            case 7:
                return "DCC";
            case 8:
                return "DCCC";
            case 9:
                return "CM";
            case 0:
                return "";  
        }
        return "";
    }
    
    string thousandsDigit (int temp) {
        switch (temp) {
            case 1:
                return "M";
            case 2:
                return "MM";
            case 3:
                return "MMM";
            case 0:
                return "";  
        }
        return "";
    }
    
    string intToRoman(int num) {
        string ans, str;
        int temp;
        
        // Unit Digit
        temp = num % 10;
        ans += unitDigit (temp);
        
        // Tens Digit
        num /= 10;
        temp = num % 10;
        str = tensDigit (temp);
        str += ans;
        
        // Hundreds Digit
        num /= 10;
        temp = num % 10;
        ans = hundredsDigit (temp);
        ans += str;
        
        // Thousands Digit
        num /= 10;
        temp = num % 10;
        str = thousandsDigit (temp);
        str += ans;
        
        return str;
    }
};