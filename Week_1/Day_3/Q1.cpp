class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int k = 0;
        for(int x:a) if(x) a[k++] = x;
        while(k<a.size()) a[k++] = 0;
 }
};
