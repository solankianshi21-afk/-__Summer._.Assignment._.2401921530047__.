class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string b = strs[0];
        
        for (int i = 0; i < b.size(); i++) {
            char ch = b[i];
            
            for (int j = 1; j < strs.size(); j++) {
                
                if (i >= strs[j].size() || strs[j][i] != ch) {
                    return b.substr(0, i);
                }
            }
        }
        
        return b;
    }
        
};
