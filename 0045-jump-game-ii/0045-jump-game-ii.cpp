class Solution {
public:
   int dp[10001];
    int n ;
    vector<int>arr; 
    int solve(int i) {
    if (i >= n)return 0;
    if (i == n - 1)return 0;
    int &ret = dp[i];
    if (~ret)return ret;
    ret = 1e5;
    for (int j = arr[i]; j > 0; j--) {
        ret = min(ret, solve(i + j) + 1);
    }
    return ret;
    }
    int jump(vector<int>& nums) {
        
     memset(dp,-1,sizeof dp);
    n = nums.size();
    arr = nums; 
    return solve(0);
    }
    
};