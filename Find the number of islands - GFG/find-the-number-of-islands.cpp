// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int i, int j, int n, int m)
    {
        if(i < 0 || i >= n || j < 0 || j >= m)
        return ;
        
        if(grid[i][j] == '0')
        return;
        
        if(vis[i][j] == 1)
        return ;
        
        if(vis[i][j] == 0)
        {
            vis[i][j] = 1;
            
            dfs(grid, vis, i + 1, j, n, m);
            
            dfs(grid, vis, i - 1, j, n, m);
            
            dfs(grid, vis, i, j + 1, n, m);
            
            dfs(grid, vis, i, j - 1, n, m);
            
            dfs(grid, vis, i + 1, j + 1, n, m);
            
            dfs(grid, vis, i + 1, j - 1, n, m);
            
            dfs(grid, vis, i - 1, j + 1, n, m);
            
            dfs(grid, vis, i - 1, j - 1, n, m);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        
        int m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int> (m , 0));
        
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(vis[i][j] == 0 and grid[i][j] == '1')
                {
                    dfs(grid, vis, i, j, n, m);
                    
                    count++;
                }
            }
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends