class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans = 0; 
        for (int i = 0, cnt = 0; i < s.size(); ++i) {
            if (i == 0 || s[i-1]+1 != s[i]) cnt = 1; 
            else ++cnt; 
            ans = max(ans, cnt); 
        }
        return ans;
    }
};