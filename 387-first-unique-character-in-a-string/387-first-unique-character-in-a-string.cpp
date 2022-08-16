class Solution {
public:
    int firstUniqChar(string s) {
      int freq[26]={};
      for (auto&it : s){
          freq[it-'a']++; 
      }
        for (int i = 0 ; i<s.size();  i++){
            if(freq[s[i]-'a']==1){
                return i ; 
            }
        }
        return -1; 
    }
};