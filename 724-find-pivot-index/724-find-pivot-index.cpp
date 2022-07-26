class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0 ;
        for (auto&it : nums){
            sum+=it; 
        }
        int temp =0,pre=0,cur=0;
        for (int i = 0 ; i<nums.size();i++){
            temp+=pre;
            cur = sum - temp-nums[i];
            if(cur==temp){
                return i ; 
            }
            pre= nums[i];
        }
        return -1; 
    }
};