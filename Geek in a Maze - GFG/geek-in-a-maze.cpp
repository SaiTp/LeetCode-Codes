// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
 
	public:
	int numberOfCells(int n, int m, int r, int c, int u, int d, vector<vector<char>> &mat)
	{
		// Your code goes here
		if(mat[r][c] =='#') return 0; 
		queue<array<int, 4>> q;
		q.push({r, c, 0, 0});
		mat[r][c] = '1';
		while(!q.empty()){
		    int x = q.front()[0], y = q.front()[1];
		    int up = q.front()[2], down = q.front()[3];
		    q.pop();
		    if(y + 1 < m && mat[x][y + 1] == '.'){
		        q.push({x, y + 1, up, down});
		        mat[x][y + 1] = '1';
		    }
		    if(y - 1 >= 0 && mat[x][y - 1] == '.'){
		        q.push({x, y - 1, up, down});
		        mat[x][y - 1] = '1';
		    }
		    if(x + 1 < n && down != d && mat[x + 1][y] == '.'){
		        q.push({x + 1, y, up, down + 1});
		        mat[x + 1][y] = '1';
		    }
		    if(x - 1 >= 0 && up != u && mat[x - 1][y] == '.'){
		        q.push({x - 1, y, up + 1, down});
		        mat[x - 1][y] = '1';
		    }
		}
		int cnt = 0;
		for(int i = 0;  i < n; i++){
		    for(int j = 0; j < m; j++){
		        if(mat[i][j] == '1') cnt++;
		    }
		}
		return cnt;
	}

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;

    while (t--)
    {
    	int n, m, r, c, u, d;
        cin >> n >> m >> r >> c >> u >> d;
        
        vector<vector<char>> mat(n, vector<char>(m, '.'));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < m; j++)
        	{
        		cin >> mat[i][j];
        	}
        }

      

        Solution obj;
        cout << obj.numberOfCells(n, m, r, c, u, d, mat) << "\n";
    
    }

    return 0;
}


  // } Driver Code Ends