class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());
        if(hand.size()%groupSize)return false ;
        map<int,int>card;
        for(auto&it : hand)card[it]++;
        while(!card.empty()){
            int cur = card.begin()->first;
            for(int i = 0 ; i<groupSize;i++){
                if (card[cur + i] == 0) {
                    return false;
                }
                card[cur+i]--;
                if(card[cur+i]==0)card.erase(cur+i);
            }
        }
        return true; 
    }
};