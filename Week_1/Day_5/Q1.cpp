class Solution {
public:
    bool inValid(char ch){
        if((ch>='A' && ch<='Z') || (ch>='0' && ch<='9') || (ch>='a' && ch<='z')) return false;
        return true;
    }

    bool isPalindrome(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            while(l<r && inValid(s[l])) l++;
            while(l<r && inValid(s[r])) r--;
            if(tolower(s[l])!=tolower(s[r])) return false;
            l++;
            r--;


        }
        return true;
        
    }
};
