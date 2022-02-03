// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
   bool isValid(int arr[],int n, long long int m, int k){
        long long int c = 1;
        long long int sum = 0;
        for(int i = 0;i<n;i++){
            sum = sum+ arr[i];
            if(sum>m){
                c++;
                sum= arr[i];
            }
            if(c>k) return false;
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
        long long int l = INT_MIN;
        long long int  h = 0;
        for(int i = 0;i<n;i++){
            l = max(l,(long long)arr[i]);
            h += arr[i];
        }
        while(l<=h){
            long long int m = l + (h-l)/2;
            if(isValid(arr, n,m, k)==true){
                h = m-1;
            }
            else{
                l = m+1;
            }
        }
        return l;
        // code here
        // return minimum time
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends