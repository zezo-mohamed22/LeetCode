class Solution {
public:
int lis(vector<int>a,int n ){
    vector<int> v;
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(v.begin(), v.end(), a[i]);
        if (it != v.end()) *it = a[i];
        else v.push_back(a[i]);
    }
    return v.size();
}
    
    int lengthOfLIS(vector<int>& nums) {
        int ans= lis(nums,nums.size());
        return ans  ;
    }
};