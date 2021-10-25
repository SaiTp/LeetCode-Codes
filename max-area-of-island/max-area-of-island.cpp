class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                m=max(m,dfs(grid,i,j));
            }
        }
        return m;
    }
    int dfs(vector<vector<int>>&grid,int i,int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]!=1)
            return 0;
        grid[i][j]=0;
        int count=1;
        count+=dfs(grid,i+1,j);
        count+=dfs(grid,i-1,j);
        count+=dfs(grid,i,j+1);
        count+=dfs(grid,i,j-1);
        return count;
    }
};