
class Solution {
public:
    long long sumDigitDifferences(vector<int> &nums) {
        vector<vector<int>> freq(10, vector<int>(10));
        for (auto it: nums) {
            for (int i = 0; it > 0; it = it / 10, i++) freq[i][it % 10]++;

        }
        long long ans = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < freq[0].size(); ++j) ans += freq[i][j] * (nums.size() - freq[i][j]);
        }
        return ans/2;
    }
};
