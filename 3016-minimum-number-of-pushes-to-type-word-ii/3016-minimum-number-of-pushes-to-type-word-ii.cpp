class Solution {
public:
    int minimumPushes(string word) {
        vector<int> v(26);
        for (auto &it: word) {
            v[it - 'a']++;
        }
        sort(v.rbegin(), v.rend());
        int cnt = 1, ans = 0 ;

        for (int i = 0; i < 26; i++) {
            if (v[i] == 0)break;
            if (i && i % 8 == 0) {
                cnt++;
            }
            ans += (v[i] * cnt);
        }
        return ans;
    }
};