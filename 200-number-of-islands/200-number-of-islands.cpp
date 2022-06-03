class Solution {
public:
     bool valid(int i , int j , int n , int m){
    return i >= 0 && i < n && j >= 0 && j < m;}
     void dfs(int i , int j ,vector<vector<char>>& adj , vector<vector<bool>>&vis)         {
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
    int numIslands(vector<vector<char>>& adj) {
     vector<vector<bool>>vis(adj.size() + 5, vector<bool>(adj[0].size() + 5, 0));
    int ans = 0;
    for (int i = 0; i < adj.size(); i++) {
        for (int j = 0; j < adj[0].size(); j++) {

            if (!vis[i][j] && adj[i][j] =='1') {
                ans++;
              dfs(i, j,adj,vis);         
            }
        }
    }
   return ans ;   
    }
};