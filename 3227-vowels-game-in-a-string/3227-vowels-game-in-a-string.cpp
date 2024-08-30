class Solution {
public:
    bool doesAliceWin(string s) {
        string cur="aeoiu";
        int cnt= 0 ;
        for(auto&it : s){
            cnt+=(cur.find(it)!=-1);
        }
        return cnt==0?0:1; 
    }
};