// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
long long int mod=1000000007;
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)
    return false;
    return true;
}
    long long primeProduct(long long L, long long R){
        // code here
        long long ans=1;
        for(int i=L;i<=R;i++)
        {
            if(isprime(i))
            ans=(ans*i)%mod;
        }
        return ans%mod;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}  // } Driver Code Ends