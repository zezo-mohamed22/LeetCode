class Solution {
public:
     int minOperations(vector<int>& nums, int x) {
    int target = accumulate(nums.begin(), nums.end(), 0) - x;
    int n = nums.size();
    int i = 0, j = 0;

    int mx_len = 0, w_sum = 0;
    while (j < n) {
        w_sum += nums[j]; 
        if (w_sum < target) { 
            j++;
        } else if (w_sum == target) { 
            mx_len = max(mx_len, j - i + 1);
            j++;
        } else {
            while (i <= j && w_sum > target) {
                w_sum -= nums[i];
                i++;
            }

            if (w_sum == target) {
                mx_len = max(mx_len, j - i + 1);
            }
            j++;
        }
    }

    return mx_len == 0 ? (target == 0 ? n : -1) : n - mx_len;
}
};