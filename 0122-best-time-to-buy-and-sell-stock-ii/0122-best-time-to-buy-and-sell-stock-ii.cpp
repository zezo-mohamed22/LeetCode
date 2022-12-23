class Solution {
public:
    int dp[30001][2];
    vector<int>arr; 
    int n; 
   int solve(int i, bool flag) {
    if (i >= n) {
        return 0;
    }
    int &ret = dp[i][flag];
    if (~ret)return ret;
    if (flag) {
        ret = max(solve(i + 1, 0) + arr[i], solve(i + 1, flag));
    } else {
        ret = max(solve(i + 1, 0), solve(i + 1, 1) - arr[i]);
    }
    return ret;
}
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof dp);
        n = prices.size();
        arr=prices; 
        return solve(0,0);
    }
};