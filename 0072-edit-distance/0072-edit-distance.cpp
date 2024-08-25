class Solution {
public:
    int dp[1001][1001];
#define sz(s) (int)s.size()


    int minDistance(string s,string t) {
        memset(dp, -1, sizeof dp);
      memset(dp,'?',sizeof dp);
    dp[0][0]=0;
    for(int i =0 ; i<=sz(t);i++){
        for(int j = 0 ; j <=sz(s);j++){
            if(i) dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
            if(j) dp[i][j] = min(dp[i][j], dp[i][j-1]+1);
            if(i&&j){
                int f = t[i-1]!=s[j-1];
                dp[i][j]=min(dp[i][j],dp[i-1][j-1]+f);
            }
        }
    }
    return dp[sz(t)][sz(s)];
    }
};
