class Solution {
public:
    bool valid(unordered_map<string,int>mp , string s , int sz){
        for (int i = 0 ; i<s.size();i+=sz){
            string cur = s.substr(i,sz);
            if(mp.find(cur)!=mp.end()){
                if(--mp[cur]==-1){
                    return false ;
                }
                
            }
            else {
                return false ; 
            }
        }
        return true ; 
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int>ans ; 
        int szword = words[0].size(); 
        int countWords=words.size()*szword ;
        unordered_map<string, int> wordCount;
        for(int i=0; i<words.size(); i++) {
            wordCount[words[i]]++;
        }
        int i = 0 ;
        while (i+countWords<=s.size()){
            if(valid(wordCount,s.substr(i,countWords),szword)){
                ans.push_back(i);
            }
              i++;
        }
          return ans ;
    }
};