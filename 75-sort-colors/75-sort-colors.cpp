class Solution {
public:
    void sortColors(vector<int>& nums) {
        // using bubble sort 
        int n=nums.size(); 
        for (int i = 0 ; i<n ; i++){
            for (int j = i+1 ; j<n; j++)
            {
                if(nums[i]>=nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }   
    }
};