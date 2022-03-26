// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int arr[], int n, int k) {
        // code here
         int st = 0;
       int sum = 0;
       int i;
       for(i = 0; i < k; i++){
           sum += arr[i];
       }
       
       long double maxAvg = (long double)sum / k;
       for(; i < n; i++){
           sum -= arr[i-k];
           sum += arr[i];
           long double currAvg = (long double)sum / k;
           if(currAvg > maxAvg){
               maxAvg = currAvg;
               st = i-k+1;
           }
       }
       
       return (st);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends