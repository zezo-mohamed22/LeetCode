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
        int cnt= count(vis.begin(),vis.end(),1);
        return cnt==n; 
        
    }
};