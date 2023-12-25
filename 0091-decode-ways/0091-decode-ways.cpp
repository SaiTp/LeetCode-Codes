class Solution {
public:
    int numDecodings(string s) {
        int f[4] = {0, 0, 0, 0}; // f[i] - number of ways to decode string of length i (4 places for space optimization)
        int N = s.size();
        f[0] = 1; // zero-length string has one way to decode it
        f[1] = s[0] > '0' ? 1 : 0; // one-digit long string can have at least one way to decode
        for (int i = 1; i < N; ++i) {
            f[(i + 1)&3] = s[i] > '0' ? f[i&3] : 0; // if digit is not '0', then f(i) is the same as f(i-1)
            if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')) { // check if previous and current digit form a number
                f[(i + 1)&3] = f[(i + 1)&3] + f[(i - 1)&3]; // f(i) = f(i) + f(i - 2)
            }
        }
        return f[N&3]; // x&3 is the same as x%4, which is used for the space optimization practic
    }
};