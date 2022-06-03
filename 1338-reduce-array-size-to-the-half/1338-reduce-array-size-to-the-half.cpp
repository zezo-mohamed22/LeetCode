class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<int>que ;
        map<int,int>mp;
        for (auto it : arr)mp[it]++; 
        for (auto&it : mp){
            que.push(it.second);
        }
        int cnt = 0, cur_sz=arr.size(),sz= arr.size();
        while (cur_sz>sz/2){
            cur_sz-=que.top();
            que.pop();
            cnt++; 
        }
        return cnt; 
    }
};