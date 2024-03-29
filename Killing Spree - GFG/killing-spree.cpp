// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
    long long int killinSpree(long long int n)
    {
        // Code Here
          long long low=1, high=sqrt(n);
        long long ans=1;
        while(low <= high){
            long long int mid = low+ (high-low)/2;
            long long int sum = (mid*(mid+1)*(2*mid + 1))/6;
            if(sum == n)
            return mid;
            else if(sum < n){
            low=mid+1;
            ans=mid;
            }
            else
            high=mid-1;
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
  // } Driver Code Ends