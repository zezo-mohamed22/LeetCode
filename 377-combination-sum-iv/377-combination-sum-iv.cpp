class Solution {
public:
     int dp[1001];
     int solve(int rem,vector<int>&nums) {
    if (rem == 0)
        return 1;
    if (rem < nums[0]) {
        return 0;
    }
    int &ret = dp[rem];
    if (~ret)return ret;
    ret = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (rem >= nums[i])
            ret += solve(rem - nums[i],nums);
    }
    return ret;
}
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        memset(dp,-1,sizeof dp);
        return solve(target,nums);
    }
};