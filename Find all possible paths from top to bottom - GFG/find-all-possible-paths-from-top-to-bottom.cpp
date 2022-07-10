// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<vector<int>> res;
   void help(int i,int j,int r,int c,vector<vector<int>> &mat,vector<int>&ans)
   {
       if(i>=r || j>=c)
        return;
       if(i==r-1 && j==c-1)
       {
           ans.push_back(mat[i][j]);
           res.push_back(ans);
           return;
       }
       ans.push_back(mat[i][j]);
       if(i<r-1)
       {
           help(i+1,j,r,c,mat,ans);
           ans.pop_back();
       }
       if(j<c-1)
       {
           help(i,j+1,r,c,mat,ans);
           ans.pop_back();
       }
   }
   vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
   {
       // code here
       vector<int> ans;
       help(0,0,n,m,grid,ans);
       return res;
   }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends