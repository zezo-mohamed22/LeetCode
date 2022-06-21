class Solution {
public:
    bool valid(vector<int>& heights, int bricks, int ladders , int mid)
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<mid;i++){
            if(heights[i]>=heights[i+1])continue;
            else pq.push(heights[i+1]-heights[i]);
        }
        while(pq.size()>0 && pq.top()<=bricks){
            bricks-=pq.top();
            pq.pop();
        }
        return pq.size()<=ladders;
    }
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int l = 0 ,r = heights.size()-1,ans=0;
        while (l<=r){
            int mid = (l+r)/2 ; 
            if(valid( heights,  bricks,  ladders,mid)){
                ans = mid ; 
                l = mid +1; 
            }
            else {
                r = mid-1 ;  
            }
        }
        return ans ; 
    }
};