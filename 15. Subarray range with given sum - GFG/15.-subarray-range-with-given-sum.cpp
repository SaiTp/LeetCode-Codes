// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        //Your code here
        unordered_map<int,int> hash;
       
       int prefSUM = 0;
       int count = 0;
       
       hash[0]++;
       for(int i = 0; i<n; i++)
       {
           prefSUM += arr[i];
           
           
           if(hash.count(prefSUM-sum) == 1)
                   count += hash[prefSUM-sum] ;        
                   
           hash[prefSUM]++;
       }

       return count;
    }

};
// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends