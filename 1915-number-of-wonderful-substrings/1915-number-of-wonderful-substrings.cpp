#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    long long wonderfulSubstrings(string& word) {
        uint16_t freq[1024] = {0}; // parity for 'a'~'j'
        uint16_t sum = 0;
        freq[0] = 1; // empty string counts 1
        for (int c : word) {
            int index = c - 'a';
            sum ^= (1 << index);
            freq[sum]++;
        }

        long long cnt = 0, cnt1 = 0;// even,  odd
        for (int i = 0; i < 1024; i++) { // start from i = 0
            long long f = freq[i];
            if (f == 0)
                continue;
            cnt += f*(f-1) / 2; // count substrings with even frequency once
            for (char b = 0; b < 10; b++) {
                int j=i^(1<< b); // all possible single bit differences
                cnt1+=f*freq[j]; // count substrings with one odd frequency
                                // they are counted twice
            }
        }
        return cnt + cnt1 / 2;
    }
};
