class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int>mp; 
        vector<string>res; 
        if(s.size()<10){
            return res; 
        }
        for (int i = 0 ; i<s.size()-9; i++){
            string ans = "" ; 
            for (int j =i,cnt=0;cnt<10;j++,cnt++){
                ans+=s[j];
            }
            mp[ans]++; 
        }
        for (auto&it : mp){
            if(it.second>1){
                res.push_back(it.first);
            }
        }
        return res ; 
    }
};