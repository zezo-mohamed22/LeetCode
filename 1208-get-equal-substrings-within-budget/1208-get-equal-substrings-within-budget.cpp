class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int cur = 0, mx = 0;
        int l = 0, r = 0;
        while (l < s.size()) {
            while (r < s.size() && cur + max(s[r], t[r]) - min(s[r], t[r]) <= maxCost) {
                              cur += max(s[r], t[r]) - min(s[r], t[r]);

                r++;
            }
            mx = max(r - l, mx);
            cur -= max(s[l], t[l]) - min(s[l], t[l]);
            l++;
        }
        return mx;
    }
};
