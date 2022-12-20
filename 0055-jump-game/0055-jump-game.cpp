class Solution {
public:
    int dp[10001];
    int n ;
    vector<int>arr; 
    int solve(int i) {
    if (i >= n)return 0;
    if (i == n - 1)return 1;
    int &ret = dp[i];
    if (~ret)return ret;
    ret = 0;
    for (int j = arr[i]; j > 0; j--) {
        ret = max(ret, solve(i + j));
        if(ret)return ret; 
    }
    return ret;
}

    bool canJump(vector<int>& nums) {
     memset(dp,-1,sizeof dp);
    n = nums.size();
    arr = nums; 
    return solve(0);
    }
};