// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int kadanes(vector<int>arr)
  {
      int ma=INT_MIN,sum=0;
      for(int i=0;i<arr.size();i++)
      {
          sum+=arr[i];
          if(sum>ma)
          ma=sum;
          if(sum<0)
          sum=0;
      }
      return ma;
  }
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        // code here
        int ans=INT_MIN;
        for(int i=0;i<R;i++)
        {
            vector<int>t(C,0);
            for(int j=i;j<R;j++)
            {
                for(int k=0;k<C;k++)
                t[k]+=M[j][k];
                ans=max(ans,kadanes(t));
            }
        }
        return ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}  // } Driver Code Ends