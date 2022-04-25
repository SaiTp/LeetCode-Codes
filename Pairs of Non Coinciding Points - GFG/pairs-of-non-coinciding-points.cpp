// { Driver Code Starts

#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int numOfPairs(int X[], int Y[], int N) {
        // code here
        unordered_map<int,int>mx;
        unordered_map<int,int>my;
        unordered_map<string,int>mxy;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            string t=to_string(X[i])+","+to_string(Y[i]);
            ans+=mx[X[i]]+my[Y[i]]-2*mxy[t];
            mx[X[i]]++;
            my[Y[i]]++;
            mxy[t]++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int X[N], Y[N];
        
        for(int i=0; i<N; i++)
            cin>>X[i];
        for(int i=0; i<N; i++)
            cin>>Y[i];

        Solution ob;
        cout << ob.numOfPairs(X,Y,N) << endl;
    }
    return 0;
}  // } Driver Code Ends