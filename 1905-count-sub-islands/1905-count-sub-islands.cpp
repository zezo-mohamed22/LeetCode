class Solution {
public:
    int n , m ; 
    bool valid(int i, int j){
        return i>=0 && i <n&& j>=0 &&j<m ;
    }
    bool is_island = 0 ; 
    void dfs(int i , int j ,vector<vector<int>>& grid,vector<vector<int>>& grid2,vector<vector<int>>&vis){
        vis[i][j]=1 ;
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        for (int x = 0; x < 4; x++) {
        int r = i + dx[x];
        int c = j + dy[x];
        if (valid(r, c) && !vis[r][c]  && grid2[r][c] &&grid[r][c]) {
            dfs(r,c,grid,grid2,vis);
        }
        else if(valid(r, c) && !vis[r][c]  && grid2[r][c] &&!grid[r][c]) {
                        dfs(r,c,grid,grid2,vis);
                            is_island = false;
        }
    }
    }   
    int countSubIslands(vector<vector<int>>& grid, vector<vector<int>>& grid2) {
        n = grid.size(),m = grid[0].size(); 
        vector<vector<int>>vis(n,vector<int>(m,0)); 
        int cnt= 0 ; 
        for (int i = 0 ; i<n; i++){
            for (int j = 0 ; j<m ; j++){
                if(!vis[i][j] && grid[i][j]&&grid2[i][j]){
                    is_island=1 ; 
                    dfs(i,j,grid,grid2,vis);        
                    if(is_island)cnt++; 
                }
            }
        }
        return cnt; 
    }
};