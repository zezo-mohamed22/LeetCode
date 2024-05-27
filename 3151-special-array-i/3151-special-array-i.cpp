class Solution {
public:
    bool isArraySpecial(vector<int>& a) {
        bool flag =1; 
        int n = a.size(); 
        for(int i = 1; i<n;i++){
            flag&=((a[i]&1)!=(a[i-1]&1));
        
        }
        return flag; 
    }
};