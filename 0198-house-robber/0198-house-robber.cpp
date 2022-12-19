class Solution {
public:
    int dp[101][101];
    vector<int>cost ; 
    int n ;
    int solve(int i, int lst) {
    if (i >= n)return 0;
    int &ret = dp[i][lst];
    if (~ret)return ret;
    ret = 0;
 if (!i && lst == n + 1) {
        ret = max(ret, solve(i + 1, n + 1));
        ret = max(ret, solve(i + 2, i) + cost[i]);
    } else if (i == lst + 1) {
        ret = max(ret, solve(i + 1, lst));
        ret = max(ret, solve(i + 2, lst));
    } else {
      ret = max(ret, solve(i + 1, lst));
        ret = max(ret, solve(i + 1, i) + cost[i]);
        ret = max(ret, solve(i + 2, i) + cost[i]);
    }
    return ret;
}
    int rob(vector<int>& nums) {
    memset(dp, -1, sizeof dp);
    cost = nums;
        n=cost.size();
    return solve(0,n+1);
    }
};