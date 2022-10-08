class Solution {
public:
    int minPairSum(vector<int>& v) {
        sort(v.begin(),v.end());
        int n= v.size();
        int l = 0 ,r = n-1 ;
        int mx= 0 ; 
        while (l<r){
            mx = max(v[l]+v[r],mx);
            l++,r--;
        }
        return mx ;
    }
};