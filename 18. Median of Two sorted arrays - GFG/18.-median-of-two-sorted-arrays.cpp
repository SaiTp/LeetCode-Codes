// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int findMedian(int arr[], int n, int brr[], int m)
    {
        // code here
           int low = 0,high = n;
       while(low<=high)
       {
           int i1 = (low+high)/2;
           int i2 = (n+m+1)/2 -i1;
           int max1 ,min1 ;
           int max2 ,min2 ;
           
          if(i1==0) 
          max1 = INT_MIN;
          else 
          max1 = arr[i1-1];
          if(i2==0)
          max2 = INT_MIN;
          else 
          max2 = brr[i2-1];
          if(i1==n)
          min1 =  INT_MAX;
          else
          min1 = arr[i1];
          if(i2==m)
          min2 = INT_MAX;
          else
          min2 = brr[i2];
          if(max1<=min2 && max2<=min1)
          {
              if((n+m)%2==0)
              return (double)(max(max1,max2)+min(min1,min2))/2;
              else
              return (double)max(max1,max2);
          }
          if(max1>min2)  high = i1-1;
          if(max2>min1)   low = i1+1;
       }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;
	    
	}

}  // } Driver Code Ends