class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
         int mn = A[0], mx = A[0];
        for (int x: A) {
            mn = min(mn, x);
            mx = max(mx, x);
        }
        return max(0, mx - mn - 2*K);
    }
};