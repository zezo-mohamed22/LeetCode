class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp ; 
        for (int i = 0 ; i<edges.size();i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++; 
        }
        int mx= 0 , ans ; 
        for (auto&it : mp){
            if(mx<it.second){
                mx = it.second ; 
                ans = it.first; 
            }
        }
        return ans; 
    }
};