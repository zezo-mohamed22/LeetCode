class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int odd = 0 ;
        for (int i = 0 ; i<nums.size(); i++){
            odd^=nums[i];
        }
        return odd; 
    }
};