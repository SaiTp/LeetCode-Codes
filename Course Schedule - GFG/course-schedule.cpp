// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> arr) 
    {
        //code here
        vector<int> adj[n];
        vector<int> indegree(n,0);
        int i;
        vector<int> ans;
        // if(m==0) return ans;
        for(i=0;i<m;i++)
        {
            adj[arr[i][1]].push_back(arr[i][0]);
            indegree[arr[i][0]]++;
        }
        queue<int> q;
        for(i=0;i<n;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }
        if(q.size()==0) return ans;
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(auto x:adj[temp])
            {
                indegree[x]--;
                if(indegree[x]==0)
                q.push(x);
            }
        }
        if(ans.size()==n) return ans;
        return {};
    }
};

// { Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends