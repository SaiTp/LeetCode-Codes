// { Driver Code Starts
// C++ program to find number 
// of pairs in an array such
// that their XOR is 0
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the
// count
long long int calculate(int a[], int n);

// Driver Code
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int arr[n+1];
	  for( int i=0;i<n;i++)
	        cin>>arr[i];
	    cout << calculate(arr, n)<<endl;
        
	}
	return 0;
}

// } Driver Code Ends


long long int calculate(int a[], int n)
{
    // Complete the function
    map<long long int,long long int> m;
   long long int ans=0;
   for (long long int i=0;i<n;i++)
   {
       if (m[a[i]])
       {
           ans+=m[a[i]];
       }
       m[a[i]]++;
   }
   return ans;
}
