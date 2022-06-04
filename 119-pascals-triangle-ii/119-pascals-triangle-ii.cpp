class Solution {
public:
    int n = 34 ;
    vector<int> getRow(int rowIndex) {
       vector<vector<int>>ans(n) ;
       for (int i = 0; i < n; i++)
        {
            long long val = 1;

            for (int k = 0; k <= i; k++)
            {
               ans[i].push_back(val);
                val = val * (i - k) / (k + 1);
            }
        }
      return ans[rowIndex];
    }
};