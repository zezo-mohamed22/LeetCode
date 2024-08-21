class Solution {
public:
    int dp[101][101][101];

    int solve(int l, int r, int k, vector<int> &boxes) {
        if (l > r)return 0;
        int &ret = dp[l][r][k];
        if (~ret)return ret;
        ret = solve(l + 1, r, 0, boxes) +((k + 1) * (k + 1));
        for (int i = l + 1; i <= r; i++) {
            if (boxes[l] == boxes[i])
                ret = max({ret, solve(l+1, i-1, 0, boxes) + solve(i, r, k + 1, boxes)});
        }
        return ret;
    }

    int removeBoxes(vector<int> &boxes) {
        memset(dp, -1, sizeof dp);
        int n = boxes.size();
        return solve(0, n - 1, 0, boxes);
    }
};
