class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0, maxLength = 1;
        int n = s.length();
        
        // Helper lambda function to expand around a center
        auto expandAroundCenter = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                int currentLength = right - left + 1;
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    start = left; // Track where the longest palindrome starts
                }
                left--;  // Move left pointer outward
                right++; // Move right pointer outward
            }
        };
        
        for (int i = 0; i < n; i++) {
            // Case 1: Odd length palindrome (Center is at index i)
            expandAroundCenter(i, i);
            
            // Case 2: Even length palindrome (Center is between index i and i+1)
            expandAroundCenter(i, i + 1);
        }
        
        // Return the longest palindromic substring found
        return s.substr(start, maxLength);
    }
};
