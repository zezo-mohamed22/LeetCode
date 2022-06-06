class Solution {
public:
    bool valid(int mid , int m ,vector<int> position ){
        int cnt = m ; 
        int pos=position[0];
        cnt--;
        for (int i = 0 ; i<position.size() ; i++){
            if(position[i]-pos>=mid){
                cnt--; 
                pos=position[i];
                if(cnt==0)
                    return 1 ; 
            }
        }
        return 0;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l =0 , r= position.back() , ans = 0 , mid ; 
        while (l<=r){
            mid = l+(r-l)/2 ; 
            if(valid(mid,m,position)){
                ans = mid ;
                l = mid+1; 
            }
            else {
                r = mid-1; 
            }
        }
        return ans ;
    }
};