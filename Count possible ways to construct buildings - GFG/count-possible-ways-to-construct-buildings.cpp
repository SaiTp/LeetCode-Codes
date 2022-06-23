// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	      long i,ans=0,inf = 1000000007;
       long s = 1,b=1;
       
       while(N-->1){
           i = s%inf;
           s = (s%inf+b%inf);
           b = i;
       }
       s = s%inf + b%inf;
       return (int)((s*s)%inf);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends