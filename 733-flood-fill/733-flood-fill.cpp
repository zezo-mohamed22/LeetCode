class Solution {
public:
    bool valid(int i , int j , int n , int m){
    return i >= 0 && i < n && j >= 0 && j < m;
}
    void dfs(int i , int j ,int preColor,int newColor,vector<vector<int>>& adj , vector<vector<bool>>&vis)         {
        vis[i][j] = 1;
        
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        for (int x = 0; x < 4; x++) {
        int r = i + dx[x];
        int c = j + dy[x];
        if (valid(r,c,adj.size(),adj[0].size())&&!vis[r][c] && adj[r][c] == preColor) {
            adj[r][c] = newColor;
            dfs(r, c,preColor,newColor,adj,vis);
        }
    }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& adj, int sr, int sc, int newColor) {
        vector<vector<bool>> vis;
        vis = vector<vector<bool>>(adj.size()+5, vector<bool>(adj[0].size(), 0)); 
        dfs(sr,sc,adj[sr][sc],newColor,adj,vis);
        adj[sr][sc]=newColor;
        return adj ;
    }
};