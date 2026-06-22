class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int charCounts[26] = {0};
        for(char c : magazine) {
            charCounts[c - 'a']++; 
        }
        for(char c : ransomNote) {
                charCounts[c - 'a']--;
            if(charCounts[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
    
};
