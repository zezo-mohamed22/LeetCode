class Solution {
public:
    bool static checkPlindrome(string tmp){
        string a= tmp; 
        reverse(tmp.begin(),tmp.end());
        return tmp==a; 
    }
    string breakPalindrome(string a) {
        int n = a.size();
        set<string>getMin;
        for(int i =0 ; i<n ;i++){
            set<string>st ;
            char tmp = a[i];
            for (int j = 0 ;j <26;j++){
                if(a[i]-'a'==j)continue ; 
                else {a[i]=(j+'a'); 
                      if(!checkPlindrome(a))
                      st.insert(a);
                     }
            }
            a[i]=tmp ; 
            if(st.size()){
            string cur = *st.begin();
            getMin.insert(cur);
            }
        }
        if(a.size()==1){
            a.clear();
            return a; 
        }
        else 
        return *getMin.begin();
    }
};