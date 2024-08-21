class Solution {
public:
    int dp[100][100];

    int solve(int l, int r, string &s) {
        if (l > r) {
            return 0;
        }
        int &ret = dp[l][r];
        if (~ret)return ret;
        ret = 1 + solve(l + 1, r, s);
        for (int k = l + 1; k <= r; k++) {
            if (s[k] == s[l]) {
                ret = min(ret, solve(l, k - 1, s) + solve(k+1, r, s));
            }
        }
        return ret;
    }

    int strangePrinter(string s) {
        memset(dp,-1,sizeof dp);
        string tmp;
        int i = 0;
        while (i < s.size()) {
            char cur = s[i];
            tmp += cur;
            while (i < s.size() && cur == s[i]) {
                i++;
            }
        }
        cout<<tmp<<'\n';
        s = tmp;
        int n = s.size();
        return solve(0, n - 1, s);
    }
};
