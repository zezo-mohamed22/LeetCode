class Solution {
public:
    int cnt= 0 ; 
         bool valid(int i , int j , int n , int m){
    return i >= 0 && i < n && j >= 0 && j < m;}
     void dfs(int i , int j,vector<vector<int>>& adj , vector<vector<bool>>&vis) {
         cnt++; 
        vis[i][j] = 1;
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        for (int x = 0; x < 4; x++) {
        int r = i + dx[x];
        int c = j + dy[x];
        if (valid(r, c,adj.size(),adj[0].size()) && !vis[r][c]  && adj[r][c] == adj[i][j]) {
            dfs(r, c,adj,vis);
        }
    }
     }
    int maxAreaOfIsland(vector<vector<int>>& adj) {
 vector<vector<bool>>vis(adj.size() + 5, vector<bool>(adj[0].size() + 5, 0));
    int ans = 0;
    for (int i = 0; i < adj.size(); i++) {
        for (int j = 0; j < adj[0].size(); j++) {
cnt =0 ;
            if (!vis[i][j] && adj[i][j] ==1) {
            
                                dfs(i, j,adj,vis);
ans = max(  ans,cnt);
            
            }
        }
    }
   return ans ;   
    }
};