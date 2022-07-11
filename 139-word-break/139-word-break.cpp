class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
int n = s.length();
vector dp(n, false);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < wordDict.size(); j++){
            if(i >= wordDict[j].length()-1 && 
               ((i == wordDict[j].length()-1) || (dp[i-wordDict[j].length()]))){
                if(s.substr(i - wordDict[j].length()+1, wordDict[j].length())
                   == wordDict[j]){
                    dp[i] = true;
                    break;
                }
            }
         }
    }
return dp[n-1];
    }
};