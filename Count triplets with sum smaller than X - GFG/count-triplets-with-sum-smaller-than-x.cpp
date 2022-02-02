// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long a[], int n, long long sum)
	{
	    // Your code goes here
	    sort(a, a+n);
	    long long res = 0;
	    for(int i = 0;i<n;i++){
	        int j = i+1;
	        int k = n-1;
	        long long x = sum-a[i];
	        while(j<k){
	            if(a[j]+a[k]<x){
	                res += k-j;
	                j++;
	            }
	            else k--;
	        }
	    }
	    return res;
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends