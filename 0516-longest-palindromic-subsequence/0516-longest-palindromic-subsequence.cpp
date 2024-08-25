class Solution {
public:
    int dp[1001][1001];

            int solve(int i, int j, string &arr) {
            if(i==j)return 1; 
        if (i > j)return 0;
        int &ret = dp[i][j];
        if (~ret)return ret;
        if (arr[i] == arr[j])
            return ret = solve(i + 1, j - 1, arr) + (arr[i] == arr[j]) * 2;
        ret = max(ret, (solve(i + 1, j, arr)));
        ret = max(ret, solve(i, j - 1, arr));
        return ret;
    }


    int longestPalindromeSubseq(string s) {
        memset(dp, -1, sizeof dp);
        return solve(0,s.size()-1, s);
    }
};
