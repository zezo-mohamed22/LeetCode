class Solution {
public:
      int dp[102][2];
    vector<int>cost ; 
    int n ;
    int solve(int i,bool flag) {
    if (i >= n)return 0;
    int &ret = dp[i][flag];
    if (~ret)return ret;
    if (i == 0) {
        ret = max(solve(i + 1, 0), solve(i + 2, 1) + cost[i]);
    } else {
        if (i == n - 1) {
            if (!flag)
                ret = max(solve(i + 1, 0), solve(i + 2, 1) + cost[i]);
            else ret = max(solve(i + 1, 0), solve(i + 2, 1));
        } else ret = max(solve(i + 1, 1), solve(i + 2, 1) + cost[i]);
    }
    return ret;
           
    }
    int rob(vector<int>& nums) {
    memset(dp, -1, sizeof dp);
       cost = nums;
       n=nums.size();
    int mx= solve(0,0);
    reverse(cost.begin(),cost.end());
    memset(dp, -1, sizeof dp);
    return max(solve(0,0),mx);
    }
};