class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool flag =0  ;
        for (int i = 0 ; i<nums.size()-1 ; i++){
            flag|=(nums[i]==nums[i+1]);
        }
        return flag ; 
    }
};