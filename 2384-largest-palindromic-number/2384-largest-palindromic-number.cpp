class Solution {
public:
    
    string largestPalindromic(string num) {
       vector<int> cnt(10);
        for (char c: num) {
            cnt[c - '0']++;
        }
        
        string lp, rp; // left and right partition
        for (int i: num) {
            for (int j = 9; j >= 0; j--)  {
                if (cnt[j] > 1 && (j > 0 || lp.size())) {
                    lp += '0' + j;
                    rp += '0' + j;
                    cnt[j] -= 2;
                    break;
                }
            }
        }
        for (int i = 9; i >= 0; i--) {
            if (cnt[i]) {
                lp += '0' + i; break;
            }
        }
        reverse(begin(rp), end(rp));
        return lp + rp;
    }
};