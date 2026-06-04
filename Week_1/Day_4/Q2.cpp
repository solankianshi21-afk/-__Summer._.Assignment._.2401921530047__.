class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> vis(r, vector<int>(c, 0));
        int n = mat.size();
        int m = mat[0].size();
        if(n*m != r*c) {
            return mat;
        }

        int row = 0;
        int col = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                vis[row][col] = mat[i][j];
                col++;

                if(col == c) {
                    col = 0;
                    row++;
                }
            }
        }
        return vis;
        
    }
};
