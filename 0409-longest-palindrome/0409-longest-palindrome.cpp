class Solution {
public:
    int longestPalindrome(string s) {
        map<int,int>mp ; 
        for (auto it :s){
            mp[it]++; 
        }
        int ans = 0; 
        bool odd= 1 ; 
        for (auto&it : mp){
            ans+=it.second; 
            if(it.second&1){
                if(odd){
                    odd=0 ; 
                }
                else 
                    ans-- ; 
            }
        }
        return ans ;
    }
};