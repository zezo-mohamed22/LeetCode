class Solution {
public:
    int dp[1001][1001];
    int m ; 
    int solve(int i ,int lst){
        if(i>m)return 1e9;
        if(i==m){
            return 1 ;
        }
        int &ret = dp[i][lst];
        if(~ret)return ret ; 
        ret =solve(i+lst,lst)+1;
        ret = min(solve(i,i)+1,ret);
        return ret; 
    }
    int minSteps(int n) {
        memset(dp,-1,sizeof dp);
        m =n; 
        if(n==1)return 0 ;
        return solve(1,1);
    }
};