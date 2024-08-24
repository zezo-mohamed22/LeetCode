
class Solution {
public:
    int dp[101][101];

    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        if(!obstacleGrid[0][0])
        dp[0][0]=1;
        for(int i =0 ; i<n;i++){
            for(int j = 0 ;j<m;j++){
                if(j&&!obstacleGrid[i][j])
                dp[i][j]+=dp[i][j-1];
                if(i&&!obstacleGrid[i][j])
                dp[i][j]+=dp[i-1][j];
            }
        }
        return dp[n-1][m-1];
    }
};