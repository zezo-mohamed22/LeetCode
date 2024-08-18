class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long>st;
        long long ans=1;
        st.insert(1);
        n--;
        while(n){
            ans = *st.begin();
            st.erase(*st.begin());
            st.insert(ans*2);
            st.insert(ans*3);
            st.insert(ans*5);
            n--;
        }
        return *st.begin() ; 
    }
};