// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
public:
    int subsetXOR(vector<int> v, int N, int K) {
        // code here
        int inf = 1000;
vector<vector<int>>dp(N+1, vector<int>(2000, 0));
sort(v.begin() ,v.end());
int maxi = 100;
for(int i = 0 ; i< N; i++)
{
for(int j = 0;j<=maxi; j++)
{
dp[i+1][j]+=dp[i][j];
if(v[i]==j)
dp[i+1][j]++;
if(dp[i][j]!=0)
dp[i+1][(j^v[i])]+=dp[i][j], maxi = max(maxi, j^v[i]);
}
}

return dp[N][K];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.subsetXOR(v,N,K) << endl;
    }
    return 0; 
}  // } Driver Code Ends