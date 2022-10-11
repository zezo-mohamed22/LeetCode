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

    int findCircleNum(vector<vector<int>>& grid) {
        int n = grid[0].size(); 
        init(n);
         int cnt = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] || grid[j][i]) {
                if (find(i) != find(j)) {
                    union_set(i, j);
                    cnt--;
                }
            }
        }
    
    }
        return cnt; 
    }
};