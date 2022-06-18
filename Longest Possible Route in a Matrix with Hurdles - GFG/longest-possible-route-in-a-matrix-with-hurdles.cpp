// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int N,M;
    bool isSafe(vector<vector<int>> &matrix, int x, int y){
        return x>=0 && y>=0 && x<N && y<M && matrix[x][y]==1;
    }
    
    int helper(vector<vector<int>> matrix, int x, int y, int xd, int yd){
        if(isSafe(matrix,x,y)==false){
            return INT_MIN;
        }
        if(x==xd && y==yd){
            return 0;
        }
        matrix[x][y]=0;
        int UP=helper(matrix,x-1,y,xd,yd);
        int DOWN=helper(matrix,x+1,y,xd,yd);
        int LEFT=helper(matrix,x,y-1,xd,yd);
        int RIGHT=helper(matrix,x,y+1,xd,yd);
        matrix[x][y]=1;
        return 1+max(max(UP,DOWN),max(LEFT,RIGHT));
    }
    
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd){
        N=matrix.size();
        M=matrix[0].size();
        int ans=helper(matrix,xs,ys,xd,yd);
        return ans<0 ? -1 : ans;
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
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends