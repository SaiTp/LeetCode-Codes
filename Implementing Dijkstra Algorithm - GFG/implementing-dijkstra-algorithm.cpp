// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        set<pair<int,int>> pq;
        vector<int> dist(V,INT_MAX);//not reachable initially
        pq.insert({0,S});
        dist[S] = 0;
        while(!pq.empty()){
            auto it1=pq.begin();
            int distance = it1->first;
            int u = it1->second;
            pq.erase(it1);
            for(auto &vec:adj[u]){
                if(dist[u]+vec[1] < dist[vec[0]]){
                    //update dist[vec[0]]
                    // if already present in pq, remove its occurence 
                    if(dist[vec[0]] != INT_MAX){
                        pq.erase({dist[vec[0]],vec[0]});
                    }
                    dist[vec[0]] = dist[u]+vec[1];
                    pq.insert({dist[vec[0]],vec[0]});
                }
            }
        }
        return dist;
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends