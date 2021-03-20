class Solution {
public:
    int maxScore(string s) {
         int n = s.size(); 
        
        vector<int> zeros(n + 1, 0), ones(n + 1, 0);
        
        for (int i = 0; i < n; i++) {
            ones[i + 1]  = ones[i] + (s[i] == '1');
            zeros[i + 1] = zeros[i] + (s[i] == '0');
        }
        
        int res = -1;
        
        for (int i = 1; i <= n - 1; i++) {
            res = max(res, zeros[i] + ones[n] - ones[i]);
        }
        
        return res;
    }
};