class Solution {
public:
    unordered_set<int>st;
    void dfs(int i,vector<bool> &v,vector<int> adj[])
    {
      v[i]=true;
      for(auto t:adj[i])
      {
          if(!v[t] && st.find(t)==st.end())
              dfs(t,v,adj);
      }
    }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<int>adj[n];
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);          
        }
        vector<bool>vis(n,false);
        for(auto i:restricted)
            st.insert(i);
        dfs(0,vis,adj);
        int c=0;
        for(auto i: vis)
            if(i)
                c++;
        return c;
    }
};