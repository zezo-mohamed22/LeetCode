class Solution {
public:
    string replaceWords(vector<string> &dictionary, string sentence) {
        map<string, int> mp;
        for (auto &it: dictionary)mp[it]++;
        string tmp;
        bool flag = 0;
        string ans = "";
        for (auto &it: sentence) {
            if (it == ' ') {
                if (!flag)
                    ans += tmp;
                ans += it;
                tmp.clear();
                flag = 0;
            } else {
                tmp.push_back(it);
                if (mp.count(tmp) && !flag) {
                    flag = 1;
                    ans += tmp;
                }
            }
        }
        if(!flag)ans+=tmp;
        return ans;
    }
};
