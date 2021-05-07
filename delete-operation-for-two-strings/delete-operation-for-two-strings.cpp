class Solution {
public:
    int minDistance(string w1, string w2) {
        int m = w1.size(), n = w2.size();
        if (m < n) swap(w1, w2), swap(n, m);
        vector<int> dpLast(n+1, 0), dpCurr(n+1, 0);
        for (char c1 : w1) {
            for (int j = 0; j < n; j++) 
                dpCurr[j+1] = c1 == w2[j]
                    ? dpLast[j] + 1
                    : max(dpCurr[j], dpLast[j+1]);
            swap(dpLast, dpCurr);
        }
        return m + n - 2 * dpLast[n];
    }
};