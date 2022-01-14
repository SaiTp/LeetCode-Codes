// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.

 int normal(int arr[], int n)
{
   int mxm_normal = arr[0], sum = arr[0];
   for (int i = 1; i < n; i++)
   {
       sum = max(arr[i], sum + arr[i]);
       mxm_normal = max(mxm_normal, sum);
   }

   return mxm_normal;
}

   int circularSubarraySum(int arr[], int num){
       
       // your code here
       int mxm_normal = normal(arr, num);
       int sum = 0;
       if (mxm_normal < 0)
       {
           return mxm_normal;
        }

       for (int i = 0; i < num; i++)
        {
            sum = sum + arr[i];
             arr[i] = -arr[i];
         }
 
         int mxm_circular = sum + normal(arr, num);

       return max(mxm_circular,mxm_normal);
   }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends