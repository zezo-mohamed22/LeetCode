class Solution {
public:
    string losingPlayer(int x, int y) {
        bool turn = 0 ;
        while(x>=1&&y>3){
            x-=1;
            y-=4;
            turn^=1;
        }
        return turn?"Alice":"Bob" ;
    }
};