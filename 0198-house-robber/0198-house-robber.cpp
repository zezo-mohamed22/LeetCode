class Solution {
public:
    int dp[101];
    vector<int>cost ; 
    int n ;
    int solve(int i) {
    if (i >= n)return 0;
    int &ret = dp[i];
    if (~ret)return ret;
    ret = max(solve(i + 1), solve(i + 2) + cost[i]);
    return ret;
        
}
    int rob(vector<int>& nums) {
    memset(dp, -1, sizeof dp);
    cost = nums;
        n=cost.size();
    return solve(0);
    }
};