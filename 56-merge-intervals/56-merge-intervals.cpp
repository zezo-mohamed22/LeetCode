class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size(); 
        vector<vector<int>>ans ; 
        for (int i = 0 ; i<n-1; i++){
             if(intervals[i][1]>=intervals[i+1][0]){
                 if(intervals[i][1]>=intervals[i+1][1]){
                 intervals[i+1][0]=intervals[i][0];
                    intervals[i+1][1]=intervals[i][1];
                 }
                 else 
                 intervals[i+1][0]=intervals[i][0];
             }
                else {
                    ans.push_back(intervals[i]);
                }
        }
        ans.push_back(intervals[n-1]);
        return ans ; 
    }
};