//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution {
public:
int dx[8]={0,0,-1,1,-1,-1,1,1};
int dy[8]={-1,1,0,0,-1,1,1,-1};
    bool solve(vector<vector<char>>&grid, string &word,int i,int j,int k,int d,int n,int m){
        if(k>=word.size()) return true;
        if((i<0 || i>=n) || (j<0 || j>=m )||word[k]!=grid[i][j]) return false;
        return solve(grid,word,i+dx[d],j+dy[d],k+1,d,n,m);
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    int n=grid.size(),m=grid[0].size();
	    vector<vector<int>>ans;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==word[0]){
	                for(int d=0;d<8;d++){
	                    if(solve(grid,word,i,j,0,d,n,m)){
	                        ans.push_back({i,j});
	                        break;
	                    }
	                }
	            }
	        }
	    }
	    return ans;
	}
};
	
	

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends