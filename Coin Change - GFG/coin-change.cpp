//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int c[], int n, int sum) {
        // code here.
        long long int dp[sum+1][n+1];
        for(int i=0;i<=n;i++)
        dp[0][i]=1;
        for(int i=0;i<=sum;i++)
        dp[i][0]=0;
        for(int i=1;i<=sum;i++)
        {
            for(int j=1;j<=n;j++)
            {
                dp[i][j]=dp[i][j-1];
                if(c[j-1]<=i)
                dp[i][j]+=dp[i-c[j-1]][j];
            }
        }
        return dp[sum][n];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends