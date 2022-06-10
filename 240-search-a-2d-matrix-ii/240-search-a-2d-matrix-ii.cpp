class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        for (int i = 0 ; i<v.size();i++){
            if(binary_search(v[i].begin(),v[i].end(),target)){
                return 1; 
            }
        }
        return 0 ; 
    }
};