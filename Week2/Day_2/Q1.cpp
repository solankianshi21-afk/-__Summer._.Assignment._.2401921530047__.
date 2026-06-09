class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int maxi = INT_MIN;
        int l = s.length();
        for(int i = 0; i < l; i++) {
            int k = 0;
            string ans = "";

            for(int j = i; j < l; j++) {
                if(ans.find(s[j]) != string::npos) {
                    break;
                }
                ans += s[j];
                k++;
                maxi = max(k, maxi);
            }
        }
        return maxi;
    }
};
