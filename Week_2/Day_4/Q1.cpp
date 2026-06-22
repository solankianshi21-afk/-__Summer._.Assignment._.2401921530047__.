class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int l = 0; 
        
        for(int r = 0; r <= n; r++) {
            if(r == n || s[r] == ' ') {
               int i = l, j = r - 1;
               while(i < j) {
                   swap(s[i] ,s[j]);
                   i++;
                   j--;
               }
               l = r + 1;
            }
        }
        return s;
    }
};
