class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n + 2, 1), pref(n + 2, 1), suffix(n + 2, 1);
        for (int i = 1; i <= n; i++) {
            v[i]=nums[i-1];
            pref[i] = (pref[i - 1] * v[i]);
        }
        for (int i = n; i >= 1; i--) {
            suffix[i] = suffix[i + 1] * v[i];
        }
        vector<int> res(n + 2);
        for (int i = 1; i <= n; i++) {
            res[i] = suffix[i + 1] * pref[i - 1];
        }
        for (int i = 0 ; i<n ; i++){
            nums[i]=res[i+1];
        }
        return nums ; 
    }
};