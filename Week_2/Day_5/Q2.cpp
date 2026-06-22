lass Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;
        for(int i = 0; i < chars.size();) {
            int count = 1; 
            int j = i+1;
            
            while(j < chars.size() && chars[i] == chars[j] ) {
                count++;
                j++;
            }
            chars[ans++] = chars[i];
            if(count > 1) {
                string countStr = to_string(count);
                for(char ch : countStr) {
                    chars[ans++] = ch;
                }
            }
            i = j;
            
        }
        return ans;
    }
};
