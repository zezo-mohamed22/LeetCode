class Solution {
public:
    int getBit(int x, int k) {
        return (x >> k) & 1;
    }
    vector<int> singleNumber(vector<int>& nums) {
        int Xor = 0; 
        for(auto&it : nums){
            Xor^=it; 
        }
        int pos = 0; 
        while(!getBit(Xor,pos))pos++;
        int x=0;
        for(auto&it : nums){
            if(getBit(it,pos))x^=it;
        }
        int y = x^Xor;
        return {x,y};
    }
};