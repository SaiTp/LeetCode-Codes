class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m,n,tot=0;
        m=grid.size();
        n=grid[0].size();
        vector<int>rc(m,0);
        vector<int>cc(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j])
                {
                    tot++;
                    rc[i]++;
                    cc[j]++;
                }
            }
        }
        int iso=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j])
                    if(rc[i]==1 && cc[j]==1)
                        iso++;
            }
        }
        return tot-iso;
    }
};