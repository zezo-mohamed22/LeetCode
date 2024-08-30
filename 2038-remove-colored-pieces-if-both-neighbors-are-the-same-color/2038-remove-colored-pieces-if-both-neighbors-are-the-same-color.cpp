class Solution {
public:
    bool winnerOfGame(string colors) {
        int p1 = 0, p2 = 0, cnt = 1, n = colors.size();
        char lst = colors[0];
        for (int i = 1; i < n; i++) {
            if (lst == colors[i]) {
                cnt++;
            } else {
                if (lst == 'A') {
                    p1 += max(0, cnt - 2);
                } else {
                    p2 += max(0, cnt - 2);
                }
                cnt = 1;
            }
            lst = colors[i];
        }
        if (lst == 'A') {
            p1 += max(0, cnt - 2);
        } else {
            p2 += max(0, cnt - 2);
        }
        return p1>p2;
    }
};
