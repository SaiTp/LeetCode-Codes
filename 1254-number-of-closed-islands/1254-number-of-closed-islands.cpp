class Solution {
public:
    int m,n;
    void dfs(int r, int c, vector<vector<int>> &grid, int m, int n){
    if(r<0 or c<0 or r>=m or c>=n or grid[r][c]!=0)
        return;
    grid[r][c] = 1;
    dfs(r,c+1,grid,m,n);
    dfs(r,c-1,grid,m,n);
    dfs(r+1,c,grid,m,n);
    dfs(r-1,c,grid,m,n);
}

int closedIsland(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size(), ans = 0;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((i==0 or j==0 or i==m-1 or j==n-1) && grid[i][j]==0) //checking for boundary 0's and updating
                dfs(i,j,grid,m,n);                                 //it and it's adjacent 0's with 1
        }
    }
    
    for(int i=0;i<m;i++){   //normal dfs call to count the no of max connected islands of 0's
        for(int j=0;j<n;j++){
            if(grid[i][j]==0){
                dfs(i,j,grid,m,n);
                ans++;
            }
        }
    }
    return ans;
}
};