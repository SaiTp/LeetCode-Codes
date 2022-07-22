class Solution {
public:
    int countTexts(string s) {
        int mod=1e9+7;
        int n = s.length();
    vector<int> dp(n+1,0);
    
    dp[0] = 1;
    int ans = 0;
    
    for(int i = 1; i < n+1; i++){
        
        dp[i] = (dp[i] + dp[i-1]) % mod;
        
        
        if(i > 1 && s[i-1] == s[i-2])
            dp[i] =(dp[i] + dp[i-2]) % mod;
        
        
        if(i > 2 && s[i-1] == s[i-2] && s[i-2] == s[i-3])
            dp[i] =(dp[i] + dp[i-3]) % mod;
        
        
        if(s[i-1] == '7' || s[i-1] == '9')
            if(i > 3 && s[i-1] == s[i-2] && s[i-1] == s[i-3] && s[i-1] == s[i-4])
                dp[i] =(dp[i] + dp[i-4]) % mod;
        
    }
    
    return dp[n];
    }
};