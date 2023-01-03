class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt= 0 ;
        for (int j= 0; j<strs[0].size();j++){
           int lst='0',flag= 0 ;
            for (int i = 0 ; i<strs.size(); i++){
                if(lst=='0'){
                    lst= strs[i][j];
                }
                else {
                    if(strs[i][j]<lst){
                        flag=1; 
                    }
                }
                 lst= strs[i][j];
            }
            cnt+=flag;
        }
        return cnt ;
    }
};