// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMinInsertions(string S){
        // code here 
         int n = S.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (S[i] == S[j])
            {
                if (i - j == 1)
                    dp[i][j] = 0;
                else
                    dp[i][j] = dp[i + 1][j - 1];
            }
            else
                dp[i][j] = min(1 + dp[i + 1][j], 1 + dp[i][j - 1]);
        }
    }
    return dp[0][n - 1];
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.findMinInsertions(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends