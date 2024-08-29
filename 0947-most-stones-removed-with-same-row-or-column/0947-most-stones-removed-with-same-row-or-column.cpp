class Solution {
public:
int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};
    map<pair<int,int>,int>vis; 
    bool valid(int i , int j,int x,int y){
        if(i==x||j==y)return 1; 
        return 0;  
    }
    int solve(int i , int j , map<pair<int,int>,bool>&mp){

        vis[{i,j}]=1 ;
        int ret= 1; 
       for(auto&it : mp){
            int x=  it.first.first ; 
            int y  = it.first.second ; 
            if( vis.find({it.first})==vis.end()&&valid(i,j,x,y)){
                ret+=solve(x,y,mp)+1 ; 
            }
        }
        return ret; 
    }
    int removeStones(vector<vector<int>>& stones) {
        map<pair<int,int>,bool>mp; 
        for (auto&it : stones){
            mp[{it[0],it[1]}]=1 ;
        }
        int ans= 0 ; 
        for (auto&it : mp){
            if(vis.find({it.first})==vis.end())
           {
               ans++; 
               solve(it.first.first,it.first.second,mp);
           }
        }
        return int(stones.size())-ans; 
    }
};