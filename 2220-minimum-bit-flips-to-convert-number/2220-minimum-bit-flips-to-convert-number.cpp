class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=goal^start;
        return __builtin_popcount(x);
    }
};