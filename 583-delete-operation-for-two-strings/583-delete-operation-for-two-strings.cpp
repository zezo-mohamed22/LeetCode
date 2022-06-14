class Solution {
int dp[510][510];
    public:
    int solve(int i , int j ,string &word1,string &word2){
        if(i==word1.size() || j==word2.size()){
            return 0 ; 
        }
        int &ret = dp[i][j];
        if(~ret)
            return ret ; 
        if(word1[i]==word2[j]){
            ret = solve(i+1,j+1,word1,word2)+1;
        }
        int c1 =solve(i,j+1,word1,word2);
        int c2= solve(i+1,j,word1,word2);
        ret = max(ret,max(c1,c2));
        return ret ;
    }
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        int ans =  solve(0,0,word1,word2);
        int res = 0 ; 
        res+=(word1.size()-ans);
        res+=(word2.size()-ans);
        return res ;
    }
};