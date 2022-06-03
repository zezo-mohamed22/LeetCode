class Solution {
public:
    int n , m ; 
    bool valid(int i, int j){
        return i>=0 && i <n&& j>=0 &&j<m ;
    }
    void dfs(int i , int j ,vector<vector<int>>& grid,vector<vector<int>>&vis){
        vis[i][j]=1 ;
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        for (int x = 0; x < 4; x++) {
        int r = i + dx[x];
        int c = j + dy[x];
        if (valid(r, c) && !vis[r][c]  && grid[r][c] == 0) {
            grid[r][c]=1;
            dfs(r,c,grid,vis);
        }
    }
    }
     void dfs2(int i , int j ,vector<vector<int>>& grid,vector<vector<int>>&vis){
         vis[i][j]=1;  
         int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        for (int x = 0; x < 4; x++) {
        int r = i + dx[x];
        int c = j + dy[x];
        if (valid(r, c) && !vis[r][c]  && grid[r][c] == grid[i][j]) {
                    dfs2(r,c,grid,vis);
        }
     }
     }        
     int closedIsland(vector<vector<int>>& grid) {
        n = grid.size(),m = grid[0].size(); 
        vector<vector<int>>vis(n,vector<int>(m,0)); 
        for (int i = 0 ; i<n; i++){
            for (int j = 0 ; j<m ; j++){
                if((i==0 || i==n-1 || j==0 ||j==m-1) && grid[i][j]==0){
                    dfs(i,j,grid,vis);
                    grid[i][j]=1; 
                }
            }
        }
        vis=vector<vector<int>>(n,vector<int>(m,0)); 
        int cnt= 0 ; 
        for (int i = 0 ; i<n; i++){
            for (int j = 0 ; j<m ; j++){
                if(!vis[i][j] && grid[i][j]==0){
                    cnt++; 
                    dfs(i,j,grid,vis);                }
            }
        }
        return cnt; 
    }
};