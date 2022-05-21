class Solution {
public:
    int coinChange(vector<int>& arr, int amount) {
        vector<int> dp(amount + 1, 1e9);
        dp[0] = 0;
        for(int tar = 1; tar <= amount; tar++){
            for(int ele : arr){
                if(tar - ele >= 0)
                    dp[tar] = min(dp[tar], dp[tar - ele] + 1);
            }
        }
        return dp[amount] == 1e9 ? -1 : dp[amount];
    }
};