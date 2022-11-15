//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        int i,j;
        i=j=0;
        int ans=1;
        for(int k=1;k<N;k++)
        {
            if(abs(arr[k]-arr[j])==1)
            {
                if(arr[k]!=arr[j-1])
                i=j;
                j=k;
            }
            else if(arr[k]!=arr[j])
            i=j=k;
            ans=max(ans,k-i+1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends