class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int>dp(n,0);
        for(int i=0;i<triangle[n-1].size();i++)
            dp[i]=triangle[n-1][i];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<=triangle[i].size()-1;j++)
                dp[j]=min(dp[j],dp[j+1])+triangle[i][j];
        }
        return dp[0];
    }
};