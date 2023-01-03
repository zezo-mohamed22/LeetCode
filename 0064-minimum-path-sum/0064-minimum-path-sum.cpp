class Solution {
public:
    int dp[205][205];
    vector<vector<int>>grid;
    int n ,m ; 
    bool valid(int i , int j , int n , int m ){
            return i >= 0 && i < n && j >= 0 && j < m;

    }
    int solve(int i , int j){
        if(!valid(i,j,n,m))return (int)1e9 ; 
        if(i==n-1&&j==m-1){
            return grid[i][j];
        }
        int&ret = dp[i][j];
        if(~ret)return ret ;
        ret = (int)1e9 ; 
        ret =min(ret,solve(i,j+1)+grid[i][j]);
        ret=min( solve(i+1,j)+grid[i][j],ret);
        return ret; 
    }
    int minPathSum(vector<vector<int>>& v) {
        memset(dp,-1,sizeof dp);
        m = v[0].size(),n= v.size();
        grid = v; 
        return solve(0,0);
    }   
};