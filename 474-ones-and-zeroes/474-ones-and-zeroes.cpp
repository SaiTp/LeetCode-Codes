class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
     vector<int> zeros(strs.size(), 0), ones(strs.size(), 0);
        
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i]; int count = 0;
            
            for (const auto& c : s) {
                if (c == '1') count++;
            }
            
            ones[i] = count; zeros[i] = s.size() - count;
        }
        
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0)); 
        
        int res = 0;
        
        for (int i = 0; i < strs.size(); i++) {
            for (int x = m; x >= zeros[i]; x--) {
                for (int y = n; y >= ones[i]; y--) {
                    dp[x][y] = max(dp[x][y], dp[x - zeros[i]][y - ones[i]] + 1);
                }
            }
        }
            
        return dp[m][n];
    }
};