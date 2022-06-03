class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int sum = 0 ,ans= 1e9 ;
       for(int i = 0 , j=0; i<nums.size() ;i++){
            sum+=nums[i];
           while(sum>=target){
                ans=min(ans,i-j+1);
                sum-=nums[j++];
        }
       }
        return ans==1e9?0:ans;
    }
};