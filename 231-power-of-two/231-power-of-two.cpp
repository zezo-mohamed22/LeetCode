class Solution {
public:
   
bool isPowerOfTwo(long long num) {
	return (num & num - 1) == 0 && num>0;
}
};