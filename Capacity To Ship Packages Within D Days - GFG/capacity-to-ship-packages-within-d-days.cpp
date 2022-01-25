// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
         int l = 0, r = 0;
        for(int i=0; i<N; i++) {
            l = max(l, arr[i]);
            r += arr[i];
        }
        
        int res = r;
        while(l <= r) {
            int cap = (l+r)/2;
            
            int days = 1, temp = 0;
            for(int i=0; i<N; i++) {
                temp += arr[i];
                if(temp > cap) {
                    temp = arr[i];
                    days++;
                }
            }
            if(days <= D) {
                res = cap;
                r = cap-1;
            }
            else l = cap+1;
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends