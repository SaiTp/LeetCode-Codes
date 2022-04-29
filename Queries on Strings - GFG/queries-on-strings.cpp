// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
vector<int>SolveQueris(string str, vector<vector<int>>q){
	    int n=str.length();
	    int dp[n+1][26];
	    memset(dp,0,sizeof(dp));
	    for(int i=1;i<=n;i++)
	    {
	        int ind=str[i-1]-'a';
	        for(int j=0;j<26;j++)
	        {
	            if(ind==j)
	            dp[i][j]=dp[i-1][j]+1;
	            else
	            dp[i][j]=dp[i-1][j];
	        }
	    }
	    vector<int> v;
	    for(int i=0;i<q.size();i++)
	    {
	        int l=q[i][0];
	        int r=q[i][1];
	        int count=0;
	        for(int j=0;j<26;j++)
	        {
	           int ls=dp[l-1][j];
	           int rs=dp[r][j];
	           if(rs-ls>0)
	           count++;
	        }
	        v.push_back(count);
	        
	    }
	    return v;
	    // Code here
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		int q;
		cin >> q;
		vector<vector<int>>Query;
		for(int i = 0; i < q; i++){
			int l, r;
			cin >> l >> r;
			Query.push_back({l, r});
		}
		Solution obj;
		vector<int> ans = obj.SolveQueris(str, Query);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends