class Solution {
    int dp[201][201];
public:
    int solve(vector<vector<int>>& triangle , int i , int j ){
        if(i==triangle.size())
            return 0 ;
     int &ret = dp[i][j];
    if (~ret)return ret;
    int c1 = solve(triangle,i + 1, j) + triangle[i][j];
    int c2 = solve(triangle,i + 1, j + 1) + triangle[i][j];
    return ret = min(c1, c2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof dp);
        return solve(triangle,0,0);
    }
};