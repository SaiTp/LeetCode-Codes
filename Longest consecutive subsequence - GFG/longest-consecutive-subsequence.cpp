// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      int ans=1,j=0;
      sort(arr,arr+n);
      for(int i=1;i<n;i++)
      {
          if(arr[j]!=arr[i])
          {
              j++;
          arr[j]=arr[i];
          }
      }
      n=j+1;
      //for(int i=0;i<n;i++)
      //cout<<arr[i]<<" ";
      int c=1;
      for(int i=0;i<n-1;i++)
      {
          if(arr[i]+1==arr[i+1])
          {
          c++;
          ans=max(ans,c);
          }
          else
          c=1;
      }
      return ans;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends