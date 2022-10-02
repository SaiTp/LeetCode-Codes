#define ll long long int
class Solution {
    int mod=1e9+7;
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<ll>>dp(n+1,vector<ll>(target+1,0));
        dp[n][0]=1;
        
        for(int dice=n-1;dice>=0;dice--){
            for(int tar=0;tar<=target;tar++){
                ll ans=0;
                for(int i=1;i<=k;i++){
                    if(tar-i>=0){
                        ans+=(dp[dice+1][tar-i]%mod);   
                    }
                }
                dp[dice][tar]=(ans%mod);
            }
        }
        
        return ((int)dp[0][target]%mod);
    }
};