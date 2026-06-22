class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        
        for (int l = 1; l <= n / 2; l++) {

            if (n % l == 0) {
           
                string sub = s.substr(0, l);
                string constructed = "";
                

                int repetitions = n / l;
                for (int i = 0; i < repetitions; i++) {
                    constructed += sub;
                }
                
          
                if (constructed == s) {
                    return true;
                }
            }
        }
        
        return false;
    }
};
