// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int check(string s)
  {
      int a=0;
      for(auto i:s)
      a+=i-'0';
      return a;
  }
    int isPossible(int N, int arr[]) {
        // code here
        string t;
        for(int i=0;i<N;i++)
        t+=to_string(arr[i]);
        int c=check(t);
        return c%3==0;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}  // } Driver Code Ends