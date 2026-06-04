class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.empty())  return {};
        int n = matrix.size();
        int m = matrix[0].size();
        int count = 0;
        int total = n*m;
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n - 1;
        int endingCol = m - 1;
        while(count < total) {
            for(int idx = startingCol; count < total && idx <= endingCol; idx++) {
                ans.push_back(matrix[startingRow][idx]);
                count++;
            }
            startingRow++;
            //ending endingCol
            for(int idx = startingRow; count < total && idx <= endingRow; idx++) {
                ans.push_back(matrix[idx][endingCol]);
                count++;
            }
            endingCol--;
            for(int idx = endingCol; count < total && idx >= startingCol; idx--) {
                ans.push_back(matrix[endingRow][idx]);
                count++;
            }
            endingRow--;
            for(int idx = endingRow; count < total && idx >= startingRow; idx--) {
                ans.push_back(matrix[idx][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
        
        
    }
};
