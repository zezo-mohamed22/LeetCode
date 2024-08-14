class Solution {
public:
    bool valid(vector<int>& nums,int k,int md){
        int l =0, r= 0 ;
        int c =0 ;
        for(r=1;r<nums.size();r++){
            while(nums[r]-nums[l]>md){
                l++;
            }
            c+=(r-l);
        }
        return c<k;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int low = 0, high = nums.back() - nums.front();
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (valid(nums,k, mid)) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        
        return low;
    }
};