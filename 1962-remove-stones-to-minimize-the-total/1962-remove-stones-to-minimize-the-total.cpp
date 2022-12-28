class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
    priority_queue<int>pq; 
    for (auto&it : piles){
        pq.push(it);
    }
        while (k--){
            auto it = pq.top();
            pq.pop();
                pq.push(it-floor(it/2.0));
        }
    int ans=0;
    while (pq.size()){
        ans+=pq.top();
        pq.pop();
    }
        return ans;
    }
};