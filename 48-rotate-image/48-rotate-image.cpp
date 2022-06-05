class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int n = v.size(); 
        vector<vector<int>>ans(n) ; 
         for (int i = 0; i < n; i++) {
            for (int j = n - 1; j >= 0; j--) {
                ans[i].push_back(v[j][i]);
            }
         }
        v=ans; 
    }
};