class Solution {
public:
    int minimumDeletions(string s) {
        int curr = 0;
        int bcount = 0;
        for (char c : s) {
            if (c == 'a') {
                curr = min(curr + 1, bcount);
            } else {
                bcount++;
            }
        }
        return curr;
    }
};