class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
     int n,m,i,j;
        n=str1.size();
        m=str2.size();
        string res;
        int dp[n+1][m+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(str1[i-1]==str2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        i--;
        j--;
        while(i>0 && j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                res+=str1[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1])
            {
                res+=str1[i-1];
                i--;
            }
            else
            {
                 res+=str2[j-1];
                j--;
            }
            cout<<res<<endl;
        }
        while(i>0)
        {
            res+=str1[i-1];
                i--;
        }
        while(j>0)
        {
            res+=str2[j-1];
                j--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};