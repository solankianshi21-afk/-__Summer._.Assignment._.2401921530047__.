class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return helper(s, i);
    }
    string helper(const string& s, int& i) {
        string result = "";
        int num = 0;
        while(i < s.length()) {
            char ch = s[i];
            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
                i++;
            }
            else if(ch == '[') {
                i++;
                string nestedstring = helper(s, i);
                while(num > 0) {
                   result += nestedstring;
                   num--;
                }

            }
            else if(ch == ']') {
                i++;
                return result;
            }
            else{
                result += ch;
                i++;
            }
        }
        return result;
    }
};
