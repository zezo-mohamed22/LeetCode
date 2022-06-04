class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows); 
        for (int i = 0 ; i<numRows; i++){
            int val = 1; 
            for (int j = 0 ;j<=i ; j++){
                ans[i].push_back(val);
                val = val*(i-j)/(j+1);
            }
        }
        return ans ; 
    }
};