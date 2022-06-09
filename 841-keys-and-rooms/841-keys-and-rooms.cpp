class Solution {
public:
    void dfs(int node,vector<int>&vis,vector<vector<int>>& adj){
        vis[node] = 1;
        for (int child : adj[node])
        {
            if (!vis[child]){
                dfs(child,vis,adj);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size(); 
        vector<int>vis(n+1);
        dfs(0,vis,rooms);
        int cnt= 0 ; 
        for (int i = 0 ; i<n ; i++)
            if(vis[i]==1){
                continue ; 
            }
        else{
            return 0 ; 
        }
        return 1;
        
    }
};