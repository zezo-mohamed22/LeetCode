class Solution {
public:
    bool static compare(pair<char,int>a , pair<char,int>b){
            return a.second>b.second;
        }
    string frequencySort(string s) {
      map<char,int>mp;
        for (auto&it : s){
            mp[it]++; 
        }
        string frequencySort ; 
        vector<pair<char,int>>freq(mp.begin(),mp.end());
        sort(freq.begin(),freq.end(),compare);
        for (auto& it : freq){
            while (it.second--){
                frequencySort.push_back(it.first);
            }
        }
        return frequencySort;
    }
};