class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int x) {
        int n = nums.size(); 
        vector<int>ans; 
        vector<pair<int,int>>v(n);
        for (int i = 0 ; i<n ;i++){
            v[i].first= nums[i];
            v[i].second=i;
        }
         sort(v.begin(), v.end());
        int i = 0, j = n - 1;
        while (i < j) {
            if (v[i].first + v[j].first > x) {
                j--;
            } else if (v[i].first + v[j].first < x) {
                i++;
            } else {
                ans.push_back(v[i].second+1);
                ans.push_back(v[j].second+1);
                break ; 
            }
        }
        return ans ; 
    }
};