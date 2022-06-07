class Solution {
public:
    bool valid(int mid , int threshold , vector<int>nums){
        int sum = 0 ; 
        for (int i = 0 ; i<nums.size() ; i++){
            sum+=ceil((double)nums[i]/mid); 
            
        }
        return sum<=threshold ;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1 , r = 1e9 ,ans = 0 ; 
        
        while (l<=r){
            int mid = l+(r-l)/2; 
            if(valid(mid,threshold,nums)){
                ans = mid ; 
                r=  mid-1; 
            }
            else {
                l = mid+1 ;
            }
        }
        return ans ; 
    }
};