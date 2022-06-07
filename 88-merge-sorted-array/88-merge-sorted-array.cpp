class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
           if(n == 0){
            return;
        }
        if(m == 0){
            nums1 = nums2;
            return;
        }
        
        vector<int> ans;
        int i = 0, j = 0;
        while(ans.size() < n + m){
            
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }else if(nums1[i] >= nums2[j]){
                ans.push_back(nums2[j]);
                j++;
            }
            
            if(i == m){
                while(j < n){
                    ans.push_back(nums2[j]);
                    j++;
                }
            }
            
            if(j == n){
                while(i < m){
                    ans.push_back(nums1[i]);
                    i++;
                }
            }
        }
        nums1 = ans;
        return;
    
    }
};