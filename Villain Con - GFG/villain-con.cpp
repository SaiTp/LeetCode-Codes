// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minColour(int N, int M, vector<int> mat[]) {
        // code here
          vector<int>inorder(N+1,0);
       vector<vector<int>>adj(N+1);
       for(int i=0;i<M;i++){
           inorder[mat[i][0]]++;
           adj[mat[i][1]].push_back(mat[i][0]);
       }
       int ans=0;
       queue<int>q;
       for(int i=1;i<=N;i++) if(inorder[i]==0) q.push(i);
       
       while(!q.empty()){
           
           ++ans;
           int s=q.size();
           while(s--){
               int curr=q.front();
               q.pop();
               for(auto x:adj[curr]){
                   inorder[x]--;
                   if(inorder[x]==0) q.push(x);
               }
           }
       }
       return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends