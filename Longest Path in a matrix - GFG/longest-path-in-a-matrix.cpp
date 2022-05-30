// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
        // Code here
        vector<vector<int>> dp;
   vector<vector<int>> vis;
   int longestIncreasingPath(vector<vector<int>>& matrix) {
       int res=0;
       for(int i=0;i<matrix.size();i++)
       {
           vector<int> x;
           for(int j=0;j<matrix[i].size();j++)
               x.push_back(0);
           dp.push_back(x);
           vis.push_back(x);
       }
       for(int i=0;i<matrix.size();i++)
           for(int j=0;j<matrix[i].size();j++)
               if(vis[i][j]==0)
                   res=max(res,fun(matrix,i,j,0));
       return res;
   }
   int fun(vector<vector<int>>& v,int i,int j,int val)
   {
       if(i>=v.size() || j>=v[0].size() || i<0 || j<0 || v[i][j] <= val)
           return 0;
           
       if(dp[i][j]!=0)
           return dp[i][j];
           
       vis[i][j]=1;
       int t=0;
       t=max(t,1+fun(v,i+1,j,v[i][j]));
       t=max(t,1+fun(v,i-1,j,v[i][j]));
       t=max(t,1+fun(v,i,j+1,v[i][j]));
       t=max(t,1+fun(v,i,j-1,v[i][j]));
       
       dp[i][j]=t;
       return t;
   }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends