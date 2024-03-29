// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    int kvowelwords(int N, int K) {
        // Write Your Code here
    long long  dp [N+1][K+1];
       long long  MOD = 1e9;
       MOD = MOD + 7;
       for(int i =0;i <= N;i++){
           
           for(int j = 0;j <= K;j++){
               if(i == 0){
                   dp[i][j] = 1;
               }else{
                   dp[i][j] = (dp[i-1][K]*21)%MOD;
                   
                   if(j > 0){
                       dp[i][j] = (dp[i][j] + dp[i-1][j-1]*5%MOD) % MOD;
                   }
               }
               
           }
       
       }
           return (int)dp[N][K];
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;int K;
        cin >>N>>K;
        
        Solution ob;
        int ans = ob.kvowelwords(N,K);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends