//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int N, int k) {
        // code here
         map<int,int> m1 ;
        map<int,int> m2 ;
        bool f0 = false , fhalf = false ;
        for(int i = 0; i< N ; i++)
        {
            if( arr[i]%k == 0) 
               f0 = true ;
            else if( (k%2==0) && arr[i] % k == k/2 ) 
            {
                fhalf = true ;
            }
            else if( arr[i]%k <= k/2 )
            {
                m1[arr[i]%k]++ ;
            }
            else 
            {
                m2[arr[i]%k]++ ;
            }
        }
        int ans = 0;
        if( f0) ans++;
        if( fhalf) ans++;
        for(int i = 1 ; i<= k/2 ; i++)
        {
            if( i == k/2 && k%2 == 0) 
            continue ;
            ans += max( m1[i] , m2[k-i] ) ;
        }
        return ans ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends