// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int>col(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(!col[i])
	        {
	        col[i]=1;
	        if(!dfs(i,adj,col))
	        return false;
	        }
	    }
	    return true;
	}
bool dfs(int v,vector<int>adj[],vector<int>&col)
{
    for(auto i:adj[v])
    {
        if(col[i]==col[v])
        return false;
        if(!col[i])
        {
        col[i]=col[v]==1?2:1;
        if(!dfs(i,adj,col))
        return false;
        }
        
    }
    return true;
    
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends