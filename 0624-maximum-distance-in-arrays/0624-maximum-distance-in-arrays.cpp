class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        int mx=arr[0].back(),mn=arr[0].front();
        int ans=0;
        for(int i =1; i<arr.size();i++){
            ans = max(abs(mx-arr[i][0]),ans);
            ans = max(abs(arr[i].back()-mn),ans);
            mx =max(arr[i].back(),mx);
            mn =min(arr[i].front(),mn);
        }
        return ans;
    }
};