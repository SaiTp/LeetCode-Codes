class Solution {
public:
    int islandPerimeter(vector<vector<int>>& g) {
            int n = g.size(), m = g[0].size(), ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(g[i][j]) {
                    int cnt = 0;
                    if(i >= 1 && g[i - 1][j])
                        cnt++;
                    if(i < n - 1 && g[i + 1][j])
                        cnt++;
                    if(j >= 1 && g[i][j - 1])
                        cnt++;
                    if(j < m - 1 && g[i][j + 1])
                        cnt++;
                    ans += (4 - cnt);
                }
            }
        }
        return ans;
    }
};