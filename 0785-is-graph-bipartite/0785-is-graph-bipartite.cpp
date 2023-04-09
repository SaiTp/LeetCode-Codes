class Solution {
public:
    int n;
    bool dfs(int i,vector<vector<int>>& graph,vector<int>&vis,vector<int>&col)
    {
        vis[i]=1;
        for(auto j:graph[i])
        {
            if(!vis[j])
            {
            if(col[j]==-1)
            {
              col[j]=!col[i];
               if(dfs(j,graph,vis,col)==false)
                   return false;
            }
            
            }
            if( col[j]!=-1 && col[j]==col[i])
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        n=graph.size();
        vector<int>vis(n,0);
        vector<int>col(n,-1);
        for(int i=0;i<n;i++)
            if(!vis[i])
            {
             col[i]=1;
             if(!dfs(i,graph,vis,col))
                 return false;
            }
        return true;
    }
};