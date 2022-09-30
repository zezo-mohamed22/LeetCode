class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>ml ;
        for (auto&it: nums){
            if(it)
            ml.insert(it);
        }
        return ml.size();
    }
};