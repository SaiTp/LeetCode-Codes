// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkMirrorTree(int n, int e, int a[], int b[]) {
        // code here
        vector <int> adj[n+1];
        for(int i=0; i<e*2; i+=2){
            adj[a[i]].push_back(a[i+1]);
        }
        for(int i=0; i<e*2; i+=2){
            if(!adj[b[i]].empty() && adj[b[i]].back()==b[i+1])
                adj[b[i]].pop_back();
            else
                return 0;
        }
        return 1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        
        cin>>n>>e;
        int A[2*e], B[2*e];
        
        for(int i=0; i<2*e; i++)
            cin>>A[i];
            
        for(int i=0; i<2*e; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.checkMirrorTree(n,e,A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends