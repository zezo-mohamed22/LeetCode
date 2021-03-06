class Solution {
public:
    int triangleNumber(vector<int>& nums) {
     int n= nums.size();
        int cnt = 0 ; 
        sort(nums.begin(),nums.end());
         for(int i=2;i<n;i++){
            int l=0;
            int r=i-1;
            while(l<r){
                if(nums[l]+nums[r]>nums[i]){
                    cnt+=r-l;
                    r--;
                    }
                else
                    l++;
            }
        }
        return cnt; 
    }
};