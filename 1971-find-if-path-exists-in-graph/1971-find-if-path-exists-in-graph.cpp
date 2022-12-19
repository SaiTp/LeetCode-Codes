class Solution {
public:
    void dfs(int src,vector<bool>&v,vector<int>g[])
    {
        v[src]=true;
        for(auto i:g[src])
        {
            if(!v[i])
                dfs(i,v,g);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<int>g[n];
        for(int i=0;i<edges.size();i++)
        {
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool>visit(n,false);
        dfs(start,visit,g);
        return visit[end];
    }
};