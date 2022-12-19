class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
          vector<int>adj[(int)2e5+5];
        for (int i = 0 ; i <edges.size(); i++){
              adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int>q;
        q.push(source);
        map<int,int>mp;
        mp[source]=1;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            if(it==destination)return true ;
            for (auto i : adj[it]){
            if (mp.find(i)==mp.end()){
                
q.push(i);
                mp[i]=1;
        }

    }
            } 
    return false ;
    }
};