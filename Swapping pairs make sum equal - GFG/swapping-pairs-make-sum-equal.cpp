// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        long long int sumA=0;
        long long int sumB=0;
        for(int i=0;i<n;i++){
            sumA+=A[i];
        }
        for(int i=0;i<m;i++){
            sumB+=B[i];
        }
        sort(A,A+n);
        sort(B,B+m);
        int i=0,j=0;
        while (i < n && j < m){
          // finding possible place to swap but not swapping
          int tempA = sumA - A[i] + B[j];
          int tempB = sumB - B[j] + A[i];
          //when place is found , it returns 1
          if (tempA == tempB) return 1;
          //finding index of i and j
          if (tempB - tempA < 0) 
          i++;
          else 
          j++;
        }
        return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends