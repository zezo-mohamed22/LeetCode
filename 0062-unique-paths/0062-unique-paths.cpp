class Solution {
public:
    int dp[101][101];
    // bool valid(int i , int j){
    //     return i>=0&&i<n&&j>=0&&j<m;
    // }
    // int solve(int i , int j){
    //     if(!valid(i,j))return 0;
    //     if(i==n-1&&j==m-1)return 1; 
    //     ret = solve(i+1,j);
    //     ret += solve(i,j+1)
    // }
    int uniquePaths(int m, int n) {
        dp[0][0]=1;
        for(int i =0 ; i<n;i++){
            for(int j = 0 ;j<m;j++){
                if(j)
                dp[i][j]+=dp[i][j-1];
                if(i)
                dp[i][j]+=dp[i-1][j];
            }
        }
        return dp[n-1][m-1];
    }
};