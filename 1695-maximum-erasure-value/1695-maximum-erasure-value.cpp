class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l = 0 , r=0 , ans = 0 , sum = 0; 
        set<int>st ;
        while (l<nums.size()){
            while(r<nums.size()&&st.find(nums[r])==st.end()){
                sum+=nums[r];
                st.insert(nums[r]);
                r++;; 
            }
            ans = max(ans,sum);
            sum-=nums[l];
            st.erase(nums[l]);
            l++;
        }
        return ans ; 
    }
};