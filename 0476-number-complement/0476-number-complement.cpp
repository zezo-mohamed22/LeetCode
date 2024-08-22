class Solution {
public:
    int findComplement(int num) {
       string tmp;
        while(num){
            if(num&1){
                tmp.push_back('1');
            }
            else tmp.push_back('0');
            num/=2;
        }
        // reverse(tmp.begin(),tmp.end());
        int ans= 0 ;
        for(int i =0 ; i<tmp.size();i++){
            if(tmp[i]=='0')
            ans+=(1<<i);
        }
        cout<<tmp<<'\n';
        return ans ; 
    }
};