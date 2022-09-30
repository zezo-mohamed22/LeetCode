class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq; 
        for(auto&it : nums)pq.push(it);
        auto it = pq.top();pq.pop();
        it--; 
        return it*(pq.top()-1);
    }
};