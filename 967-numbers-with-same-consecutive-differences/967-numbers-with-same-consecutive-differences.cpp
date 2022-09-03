class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        int c= 9 ; 
        deque<int>v;
        for (int i = 1 ; i<=c; i++){
            v.push_back(i);
        }
        n--; 
        while (n--){
                        int sz = v.size();
    for (int j = 0 ;j<sz;j++){
            auto it = v.front();
            v.pop_front();
            for (int i = 0 ; i<10 ; i++){
                                  if (abs((it % 10) - i) == k) {
                                                          v.push_back(it * 10 + i);

                                  }

            }
        }}
    vector<int>ans(v.begin(),v.end());
        return ans; 
    }
};