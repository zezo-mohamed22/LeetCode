class Solution {
public:

    vector<int> maxSubsequence(vector<int>& nums, int k) {
     priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    for (int i =0 ; i<nums.size() ; i++){
        pq.push({nums[i],i});
        if(pq.size()>k){
            pq.pop();
        }
    }
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq2; 
        while (!pq.empty()){
            pq2.push({pq.top().second,pq.top().first});
                      pq.pop();

        }
        vector<int>ans; 
      while (!pq2.empty()){
           ans.push_back(pq2.top().second);
          pq2.pop();
        }
        return ans; }
    };