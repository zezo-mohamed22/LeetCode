class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq; 
        for (auto&it : stones){
            pq.push(it);
        }
        while (pq.size()>1){
            auto it = pq.top();
            pq.pop();
            auto it2= pq.top();
            pq.pop();
            if(it==it2)continue ; 
            else {
                pq.push(abs(it-it2));
            }
        }
        return pq.size()==0?0:pq.top();
    }
};