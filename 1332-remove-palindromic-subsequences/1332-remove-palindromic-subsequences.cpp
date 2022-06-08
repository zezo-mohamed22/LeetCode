class Solution {
public:
    bool valid(string s){
        string str=s;
        reverse(str.begin(),str.end());
        return str==s;
    }
    int removePalindromeSub(string s) {
      if(valid(s))
          return 1;
        return 2;
    }
};