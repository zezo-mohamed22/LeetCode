class Solution {
public:
    const bool static compare(string a, string b ){
        return a.size()>b.size(); 
    }
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(),words.end(),compare);
        string ans="";
        for (int i = 0 ; i<words.size();i++)
        {
           if(ans.find(words[i] + "#") == string::npos) 
               ans += words[i] + "#";   
        }
        return ans.size(); 
    }
};