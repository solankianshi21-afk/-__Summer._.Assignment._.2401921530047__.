class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mn = INT_MAX, ans = 0;
        for(int x:p){ mn=min(mn,x); ans=max(ans,x-mn); }
        return ans;
        
    }
};
