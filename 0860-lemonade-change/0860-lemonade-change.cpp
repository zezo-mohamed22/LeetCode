class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool flag = 1;
        int cnt1=0,cnt2=0;
        for(auto&it : bills){
            if(it==5){
                cnt1++;
                continue; 
            }
            else if(it==10){
                cnt2++;
                if(cnt1==0)flag=0;
                else cnt1--;
            }
            else {
                if(cnt2&&cnt1){
                    cnt2--,cnt1--;
                }
                else if(cnt1>=3){
                    cnt1-=3;
                }
                else {
                    flag = 0;
                }
            }
        }
        return flag; 
    }
};