class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        for (int l = 0, r = s.size() - 1; l < r; l ++, r --) {
            if (s[l] != s[r]) {
                if (check(l + 1, r, s)) return true;
                if (check(l, r - 1, s)) return true;
                return false;
            }
        }
        return true;
    }
    bool check(int l, int r, string s) {
        for (; l < r; l ++, r --) {
            if (s[l] != s[r]) return false;
        }
        return true;
    }
};