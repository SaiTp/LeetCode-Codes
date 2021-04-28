class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int res=0,i,j,t;
        vector<int>r,c;
        for(i=0;i<grid.size();i++)
        {
            r.push_back(*max_element(grid[i].begin(),grid[i].end()));
        }
        for(i=0;i<grid.size();i++)
        {
            t=0;
            for(j=0;j<grid[0].size();j++)
            {
                if(t<grid[j][i])
                    t=grid[j][i];
            }
            c.push_back(t);
        }
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[0].size();j++)
            {
                res+=abs(min(c[j],r[i])-grid[i][j]);
            }
        }
        return res;
    }
};