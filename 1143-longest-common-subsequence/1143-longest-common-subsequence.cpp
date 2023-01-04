class Solution {
public:
    int dp[1001][1001];
    int solve(int i , int j,string &a, string &b){
        if(i==a.size()|| b.size()==j)return 0 ; 
        int&ret =dp[i][j];
        if(~ret)return ret ;
        ret= 0 ; 
        if(a[i]==b[j]){
           return ret =max(ret,solve(i+1,j+1, a,  b)+1); 
        }
        int c1= solve(i+1,j, a,  b);
        int c2 =solve(i,j+1, a,  b);
        return ret= max(c1,c2);
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof dp);
        return solve(0,0,text1,text2);
    }
};