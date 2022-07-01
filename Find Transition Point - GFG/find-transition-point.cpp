// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
     int start = 0 ,end = n - 1, ans = -1;
       
   while(start <= end) {
       int mid = start + (end - start) / 2;
       if(arr[mid] == 0) {
           start = mid + 1;
       }
       else {
           ans = mid;
           end = mid - 1;
       }
   }
   return ans;
}