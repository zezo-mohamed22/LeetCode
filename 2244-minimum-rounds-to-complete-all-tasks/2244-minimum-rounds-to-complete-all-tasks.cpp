class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mp;
        for (auto&it :tasks){
            mp[it]++; 
        }
        vector<pair<int,int>>ans(mp.begin(),mp.end());
        int cnt= 0 ;
        bool flag =0 ;
        for (auto&it : ans){
            if(it.second==1)return -1 ;
            if(it.second>1){
                while (it.second%3==0){
                    cnt+=it.second/3;
                    it.second=1;
                }
                if(it.second>1)
                cnt+=it.second/3+1;
            }
        }
        return cnt; 
    }
};