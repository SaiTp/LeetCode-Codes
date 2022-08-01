/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> ans;
        int ymax = 1000;
        for (int x=1; x<=1000; x++) {
            int i = 1, j = ymax;
            while (i < j) {
                int y = (i + j) / 2;
                int z1 = customfunction.f(x, y);
                if (z1 == z) {ans.push_back({x, y}); ymax=y; break;}
                else if (z1 < z) i = y + 1;
                else j = y;
            }
        }
        return ans;
    }
};