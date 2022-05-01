// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public: 

void fillprime(vector<bool> &prime,int n)
{
    int i,j;
    prime[0]=prime[1]=0;
    
    for(i=2;i<=n;i++)
    {
        if(prime[i]==0)
        continue;
        
        for(j=2*i;j<=n;j+=i)
        prime[j]=0;
    }
}

int superPrimes(int n)
{
    // Your code goes here
    vector<bool> prime(n+1,1);
    fillprime(prime,n);
    
    int c=0;
    
    for(int i=5;i<=n;i++)
    {
        if(prime[i] && prime[i-2])
        c++;
    }
    
    return c;
}
};

// { Driver Code Starts.

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
   		Solution ob;
   		cout << ob.superPrimes(n) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends