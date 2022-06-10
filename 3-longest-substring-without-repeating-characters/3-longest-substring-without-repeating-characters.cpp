class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 , r = 0, n=s.size() , ans = 0 ; 
        set<int>st ; 
        while (l<n){
            while (r<n &&st.find(s[r])==st.end()){
                st.insert(s[r++]);
            }
            ans=max(r-l,ans);
            st.erase(s[l++]);
        }
        return ans ; 
    }
};