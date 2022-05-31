class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto idx = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(idx!=nums.size() && nums[idx]==target){
            return idx;
        }
        else {
            return idx; 
        }
    }
};