class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int x=0;
        for(auto&it : piles)x^=it;
        return x==0?0:1; 
    }
};