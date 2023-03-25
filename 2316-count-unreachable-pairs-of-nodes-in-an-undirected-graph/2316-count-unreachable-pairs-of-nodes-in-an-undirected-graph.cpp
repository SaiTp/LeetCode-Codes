class Solution {
public:
    #define ll long long 
    void dfs(int node, vector<int> &vis, vector<int> adj[], ll &cnt) {
        vis[node] = 1;
        cnt++;
        for(auto it:adj[node]) {
            if(!vis[it]) {
                dfs(it, vis, adj, cnt);   
            }
        }        
    }
        
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        
        for(auto edge:edges) {
            adj[edge[1]].push_back(edge[0]);
            adj[edge[0]].push_back(edge[1]);
        }
        
        ll ans = ((ll)n * (n-1)) / 2;
        
        vector<int> vis(n+1, 0);
        
        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                ll cnt = 0;
                dfs(i, vis, adj, cnt);
                ans -= (cnt * (cnt-1)) / 2;
            }
        }
        return ans;
    }
    
};