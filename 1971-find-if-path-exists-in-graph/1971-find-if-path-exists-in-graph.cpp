class Solution {
public:
    bool validPath(int n, vector<vector<int>>& v, int source, int destination) {
        vector<int>adj[(int)2e5+5];
        for (int i = 0 ; i <v.size(); i++){
              adj[v[i][0]].push_back(v[i][1]);
        adj[v[i][1]].push_back(v[i][0]);
        }
        if(source==destination)
            return 1 ; 
    vector<int> distances(n+5, -1);
    distances[source] = 0;

    queue<int> q;
    q.push(source);

    while(!q.empty())
    {
        int node = q.front();   q.pop();
        if(node==destination)
            return true; 
             for(int child: adj[node])  
               if(distances[child]== -1)
            {
                q.push(child);
                distances[child] = 1;
            }
    }

    return 0;}   
};