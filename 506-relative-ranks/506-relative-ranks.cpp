class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>v=score;
        sort(v.begin(),v.end());
        vector<string>ans; 
        int n = score.size();
        for (auto&i : score){
            auto it = lower_bound(v.begin(),v.end(),i)-v.begin();
            if(n-it==1){
                ans.push_back("Gold Medal");
            }
            else if(n-it==2){
                                ans.push_back("Silver Medal");

            }
            else if(n-it==3){
                                ans.push_back("Bronze Medal");

            }
            else {
                ans.push_back(to_string(n-it));
            }
        }
        return ans;
    }
};