class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
   priority_queue<pair<double, pair<int, int>>> pq;
        for (auto &it: points) {
            int x = it.front(), y = it.back();
            pq.push({sqrt(x * x + y * y), {x, y}});
            if (pq.size() > k)
                pq.pop();
        }
        vector<vector<int>> ans;
        while (pq.size()) {
            vector<int> v;
            v.push_back(pq.top().second.first);
            v.push_back(pq.top().second.second);
            ans.push_back(v);
            pq.pop();
        }
        return ans;  
    }
};