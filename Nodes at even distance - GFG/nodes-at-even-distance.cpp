// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int countOfNodes(vector<int> graph[], int n)
    {
        // code here
         long long a=0;
        vector<int> vis(n+1, 0);
                
        vector<long long> lv(n+2, 0);
        queue<pair<int,int>> q;
         
        q.push({1,0});
         vis[1]=1;
        while(!q.empty())
        {
            int node=q.front().first;
            int level=q.front().second;
          
            lv[level]++;
           
            q.pop();
            
            int templevel=level;
            templevel-=2;
            while(templevel>=0)
            {
                a+=lv[templevel];
                templevel-=2;
            }
          
            for(int i=0; i<graph[node].size(); i++)
            {
                if(!vis[graph[node][i]])
                {
                    q.push({graph[node][i],level+1});
                    vis[graph[node][i]]=1;
                }
            }
        }
        for(int i=0; i<=n+1; i++)
        {
            if(lv[i])
            a+= (lv[i]*(lv[i]-1))/2;
        }
        
        return a;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>graph[n+1];
        for(int i=0;i<n-1;i++){
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        Solution ob;
        cout<<ob.countOfNodes(graph, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends