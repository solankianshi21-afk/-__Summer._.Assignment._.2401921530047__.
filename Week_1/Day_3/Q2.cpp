class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a(nums.size());
        int  k = 0;
        for(int n : nums) {
            a[k++] = n*n;
        }
        for(int s = 0; s < a.size(); s++) {
            for(int i = s + 1; i < a.size(); i++) {
                if(a[s] > a[i]) {
                    int temp = a[s];
                    a[s] = a[i];
                    a[i] = temp;
                }
            }
        }
        return a;  
    }
};
