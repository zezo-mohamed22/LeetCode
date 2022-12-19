class Solution {
public:
    
    int freq[10005],dp[10005];
    int mx;
    int solve(int i)
{
    if (i > mx)
        return 0;
    int &ret = dp[i];
    if (~ret)
        return ret;
    int choice = solve(i + 1);
    int choice2 = solve(i + 2) + i * freq[i];
    return ret =  max(choice2, choice);
}
    int deleteAndEarn(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
        for (auto&it : nums){
            mx=max(mx,it);
            freq[it]++;
        }
        return solve(1);
    }
};