class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        vector<string>ans;
        for(auto&it : arr){
            mp[it]++;
        }
        for(auto&it :arr){
            if(mp[it]==1){
                ans.emplace_back(it);
            }
        }
        return ans.size()>=k?ans[k-1]:"";
    }
};