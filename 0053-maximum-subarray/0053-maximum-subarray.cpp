class Solution {
public:
    int dp[(int)1e5+5][2];
    vector<int>arr ;
    int n ; 
    int solve(int i, int take) {
    if (i >= n) return take ? 0 : -1e9;
    int &ret = dp[i][take];
    if (~ret)return ret;
    if (take) {
        return ret = max(0, solve(i + 1, 1) + arr[i]);
    }
    return ret = max({solve(i + 1, 0), solve(i + 1, 1) + arr[i]});
    }
    int maxSubArray(vector<int>& nums) {
        arr = nums ; 
        n=arr.size();
        memset(dp,-1,sizeof dp);
        return solve(0,0);
    }
};