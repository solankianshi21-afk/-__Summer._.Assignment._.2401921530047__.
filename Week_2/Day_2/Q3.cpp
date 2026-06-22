class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> result;
        int sLen = s.length();
        int pLen = p.length();
        
        if (sLen < pLen) return result;
        
        // Count total unique characters needed from p
        vector<int> pCount(26, 0);
        int uniqueCharsNeeded = 0;
        for (char c : p) {
            if (pCount[c - 'a'] == 0) {
                uniqueCharsNeeded++;
            }
            pCount[c - 'a']++;
        }
        
        vector<int> sCount(26, 0);
        int matchedChars = 0;
        int left = 0;
        
        // Slide the window using a right pointer
        for (int right = 0; right < sLen; right++) {
            int rightChar = s[right] - 'a';
            sCount[rightChar]++;
            
            // If the current character count matches the required count in p
            if (pCount[rightChar] > 0 && sCount[rightChar] == pCount[rightChar]) {
                matchedChars++;
            }
            
            // When window size exceeds pLen, shrink it from the left
            if (right - left + 1 > pLen) {
                int leftChar = s[left] - 'a';
                
                // If the character leaving was contributing to a perfect match, decrement match count
                if (pCount[leftChar] > 0 && sCount[leftChar] == pCount[leftChar]) {
                    matchedChars--;
                }
                
                sCount[leftChar]--;
                left++;
            }
            
            // If all unique characters match their frequency requirements
            if (matchedChars == uniqueCharsNeeded) {
                result.push_back(left);
            }
        }
        
        return result; 
    }
};
