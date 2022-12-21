class Solution {
public:
    vector<int> adj[(int)2e3+5];int vis[(int)2e3+5];
    bool dfs(int node , int clr){
        vis[node]=clr ; 
        bool ret =1 ;
        for (auto&it : adj[node]){
            if(vis[it]){
                if(vis[it]!=clr)continue ;
                else return 0; 
            }
            ret&=dfs(it,clr^1);
        }
        return ret; 
    }
    bool possibleBipartition(int n, vector<vector<int>>& edges) {
        for (int i = 0 ; i <edges.size(); i++){
              adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
        }
          bool isBipartate = 1;
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                isBipartate &= dfs(i, 2);
            }
        }
        return isBipartate;
    }
};