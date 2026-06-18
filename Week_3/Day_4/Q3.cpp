class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int largestArea = 0; 
        int Area = 0;
        int nse, pse;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                int ind = st.top();
                st.pop();
                pse = st.empty() ? -1 : st.top();
                nse = i;
                Area = heights[ind]*(nse - pse - 1);
                largestArea = max(largestArea, Area);
            }
            st.push(i);
        }
        while(!st.empty()) {
            nse = n;
            int ind = st.top(); 
            st.pop();
            pse = st.empty() ? -1 : st.top();
            Area = heights[ind] * (nse-pse-1);
            largestArea = max(largestArea, Area);
        }
        return largestArea;
    }
};
