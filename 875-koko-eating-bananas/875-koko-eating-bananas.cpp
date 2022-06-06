class Solution {
public:
    bool valid(int mid, int h , vector<int>piles){
        int cnt = 0; 
        for (int i = 0 ; i<piles.size(); i++){
            cnt+=ceil((double)piles[i]/mid);
            if(cnt>h)
                return false ;
        }
        return true ; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1e9, ans = 0 ; 
        while (l<=r){
            int mid = l+(r-l)/2; 
            if(valid(mid,h,piles)){
             r= mid -1; 
                ans = mid ; 
            }
            else {
                l = mid +1;
            }
        }
        return ans ; 
    }
};