class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
   priority_queue<pair<int, int>> pq;
        for (auto it: arr) {
            pq.push({abs(x - it), it});
            if (pq.size() > k)
                pq.pop();
        }
        vector<int> ans;
        while (k--) {

            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};