class Solution {
public:
     int  Parent[1005], sz[1005];

void init(int n ) {
    for (int i = 0; i <=n; i++) {
        Parent[i] = i;
        sz[i] = 1;
    }
}

int find(int node) {
    if (Parent[node] == node)return node;
    return Parent[node] = find(Parent[node]);
}

void union_set(int u, int v) {
    int a = find(u);
    int b = find(v);
    if (a != b) {
        if (sz[a] < sz[b])swap(a, b);
        Parent[b] = a;
        sz[a] += sz[b];
    }
}

struct edge {
    int u, v, cost;

    edge(int u, int v, long long cost) : u(u), v(v), cost(cost) {}

    bool operator<(const edge &e) const {
        return cost < e.cost;
    }
};

long long findMst(multiset<edge> adj, int n) {
    long long cost = 0;
    init(n);
    // for (auto &it: adj) {
    //     cout << it.u << ' ' << it.v << ' ' << it.cost << '\n';
    // }
    for (auto &it: adj) {
        if (find(it.v) != find(it.u)) {
            union_set(it.v, it.u);
            cost += it.cost;
        }
    }

    return cost;
}
    
    int minCostConnectPoints(vector<vector<int>>& points) {
            multiset<edge> adj;
        int n = points.size(); 
         for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int cost = abs(points[i][0] - points[j][0]) + abs(points[i][1]- points[j][1]);
            adj.insert({i, j, cost});
        }
             
        }
return findMst(adj,n);
    }
};