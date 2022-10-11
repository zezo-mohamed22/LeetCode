class Solution {
public:
long long gcd(long long a, long long b) { return (a) ? gcd(b % a, a) : b; }
    int findGCD(vector<int>& nums) {
        auto mx = *max_element(nums.begin(),nums.end());
        auto mn =*min_element(nums.begin(),nums.end());
        return gcd(mx,mn);
    }
};