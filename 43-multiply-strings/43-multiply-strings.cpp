class Solution {
public:
    string multiply(string s1, string s2) {
        if(s1=="0" || s2=="0"){
            return "0";
        }
        int n=s1.size(),m=s2.size();
        vector<int> ans(n+m,0);
        int pow=n+m-1,carry=0;
        for(int i=n-1;i>=0;i--){
            int k=pow;
            for(int j=m-1;j>=0;j--){
                int x=s1[i]-'0',y=s2[j]-'0';
                int num=x*y+carry+ans[k];
                ans[k]=num%10;
                carry=num/10;
                k--;
            }
            ans[k]=carry;
            carry=0;
            pow--;
        }bool ok=false;
        string s3="";
        for(int i=0;i<m+n;i++){
            if(ans[i]==0 && !ok){
                continue;
            }
            else{
                ok=true;
                s3+=to_string(ans[i]);
            }
        }return s3;
    }
};