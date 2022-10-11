class Solution {
public:
long long lcm(long long a, long long b) { return (a * b) / gcd(a, b); }
    int smallestEvenMultiple(int n) {
        return lcm(2,n);
    }
};