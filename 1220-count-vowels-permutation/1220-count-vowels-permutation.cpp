class Solution {
public:
    string str = "aeiou";
    long long dp[20000][130];
    int cur ; 
    int Mod = 1e9+7 ; 
    long long solve(int idx, char prev){
    if(idx==cur)
        return 1;
    long long&ret = dp[idx][prev];
    if(~ret)
        return ret ;
    ret = 0 ;
    if(prev=='1'){
        for(int i = 0 ; i<5;i++){
            ret+= solve(idx+1,str[i]);
            ret%=Mod;
        }
    }
    else if(prev=='a'){
        ret+= solve(idx+1,'e');
        ret%=Mod;
    }
    else if(prev=='e'){
        ret+= solve(idx+1,'i');
        ret%=Mod;
        ret+= solve(idx+1,'a');
        ret%=Mod;
    }
    else if(prev=='i'){
        for(int i = 0 ; i<5;i++) {
            if (str[i] != 'i') {
                ret += solve(idx + 1, str[i]);
                ret%=Mod;
            }
        }
    }
    else if(prev=='o'){
        ret+= solve(idx+1,'i');
        ret%=Mod;
        ret+= solve(idx+1,'u');
        ret%=Mod;
    }
    else if(prev=='u'){
        ret+= solve(idx+1,'a');
        ret%=Mod;
    }
    ret%=Mod;
    return ret ;
}
    int countVowelPermutation(int n) {
        memset(dp,-1,sizeof dp);
        cur = n ; 
        return solve(0,'1');
    }
};