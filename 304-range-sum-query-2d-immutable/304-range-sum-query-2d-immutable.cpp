class NumMatrix {
public:
        vector<vector<int>> preSum;

    NumMatrix(vector<vector<int>>& matrix) {
           int m = matrix.size(), n = matrix[0].size();
        preSum= vector<vector<int>>(m + 1, vector<int>(n + 1)); 
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                preSum[i][j] = preSum[i - 1][j] + preSum[i][j - 1] - preSum[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }
    
    }
    
    
    int sumRegion(int row1, int col1, int row2, int col2) {
                row1++; col1++; row2++; col2++; 

        return preSum[row2][col2] - preSum[row1 - 1][col2] - preSum[row2][col1 - 1] + preSum[row1 - 1][col1 - 1];
    }
};