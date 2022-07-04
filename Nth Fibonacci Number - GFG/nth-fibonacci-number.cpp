// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        long long int md=1000000007;
        long long int dp[n+1];
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=n;i++)
        dp[i]=(dp[i-1]%md+dp[i-2]%md)%md;
        return dp[n]%md;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends