// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int n,int k){
        // Your code goes here
        int maxx=INT_MIN;
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0||j==0)
                dp[i][j]=0;
                else
                dp[i][j]=mat[i-1][j-1]+dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1]; 
                if(i>=k &&j>=k)
                maxx=max(maxx,dp[i][j]-(dp[i][j-k] + dp[i-k][j] - dp[i-k][j-k]));
            }
        }
        return maxx;
    }
};

// { Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}
  // } Driver Code Ends