class Solution {
public:
    int largestCombination(vector<int>& candidates) {
    int n = candidates.size();
        map<int, int> mp;
    for (int i = 0; i < n; i++) {
        bitset<32> v(candidates[i]);
        for (int j = 0; j < 31; j++) {
            if (v[j])mp[j]++;
        }
    }
    int mx = 0;
    for (auto it: mp) {
        mx = max(it.second, mx);
    }
    return mx;
    }
};