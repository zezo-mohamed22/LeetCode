class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
    vector<int>pref(nums.size()+1);
        for(int i = 1; i<nums.size();i++){
             pref[i]=pref[i-1]+((nums[i]&1)!=(nums[i-1]&1));
        }
        vector<bool>ans; 
        for(auto&it : queries){
            int l = it[0],r=it[1];
            if(pref[r]-pref[l]==r-l){
                ans.emplace_back(true);
            }
            else ans.emplace_back(false);
        }
        return ans;
    }
};