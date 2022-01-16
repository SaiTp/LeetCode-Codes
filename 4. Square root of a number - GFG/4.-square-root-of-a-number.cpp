// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
         long left=0;
           long right=x;
           long mid=0;
         
           while(left<=right)
           {
               mid=(left+right)/2;
               if(x==mid*mid) return mid;
               
               if(x>mid*mid)
               {
                   left=mid+1;
                   if(left*left>x) return mid;
               }
               if(x<mid*mid)
               {
                   right=mid-1;
                   if(right*right<x) return mid-1;
               }
               
           }
           return mid;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends