class Solution {
public:
    int maxTotalReward(vector<int>& rewardValues) {
          sort(rewardValues.begin(), rewardValues.end());
        bitset<int(1e5) + 1> dp;
        dp[0] = 1;
        for(int i = 0; i < rewardValues.size(); ++i) {
            int shift = int(1e5) - (rewardValues[i] - 1);
            dp |= (dp << shift >> shift << rewardValues[i]);
        }  
        int maxReward = int(1e5);
        while(!dp[maxReward]) 
            maxReward--;
        return maxReward;
    }
};