//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
         queue<pair<int,int>> q ;
        
        q.push({source.first,source.second}) ;
        
        int dis = 0;
        
        vector<vector<int>> vis(grid.size(), vector<int> (grid[0].size(),0)) ;
        
        vis[source.first][source.second] = 1 ;
        while(!q.empty())
        {
            int sz = q.size() ;
            
            for(int i = 0; i< sz ; i++)
            {
            int x = q.front().first ;
            int y = q.front().second ;
            
            q.pop() ;
            
            if( x == destination.first && y == destination.second ) 
            return dis ;
            
            if( x-1 >= 0 && grid[x-1][y] == 1 && vis[x-1][y] == 0)
            {
                q.push({x-1,y}) ;
                vis[x-1][y] = 1 ;
            }
            if( x+1 < grid.size() && grid[x+1][y] == 1 && vis[x+1][y] == 0) 
            {
                q.push({x+1,y}) ;
                vis[x+1][y] = 1 ;
            }
            if( y-1 >= 0 && grid[x][y-1] == 1  && vis[x][y-1] == 0)
            {
                q.push({x,y-1}) ;
                vis[x][y-1] = 1 ;
            }
            if( y+1 < grid[0].size() && grid[x][y+1] == 1 && vis[x][y+1] == 0 )
            {
                q.push({x,y+1});
                vis[x][y+1] = 1 ;
            }
            
            
            }
            dis++;
        }
        return -1 ;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends