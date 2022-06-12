class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp; 
        bool flag =0  ;
        for (int i = 0 ; i<nums.size(); i++){
            if(mp.find(nums[i])!=mp.end())
                flag = 1; 
            mp[nums[i]]++; 
        }
        return flag ; 
    }
};