class Solution {
public:
    bool valid(int mid, int maxOperations, vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > mid) {
            maxOperations -= ceil((double) nums[i] / mid) - 1;
        }
        if (maxOperations < 0)
            return false;
    }
    return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
     int l = 1 ,  r = *max_element(nums.begin(),nums.end());
     int mid = 0 , ans =r ; 
        while (l<=r ){
            int mid=  l+(r-l)/2; 
            if(valid(mid,maxOperations,nums)){
                ans = mid ; 
                r = mid-1; 
            }
            else {
                l = mid+1; 
            }
        }
    return ans; 
    }
};