// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool f(int sr,int dr,int sc,int dc,int n,vector<vector<int>>& grid) 
    {
        if( sr < 0 || sr >= n || sc < 0 || sc >= n || grid[sr][sc] == 0 )
            return false ;
        
        if( grid[sr][sc] == 2 ) return true ;
            
        grid[sr][sc] = 0 ;
        
        if( f(sr-1,dr,sc,dc,n,grid) || 
            f(sr,dr,sc+1,dc,n,grid) || 
            f(sr+1,dr,sc,dc,n,grid) || 
            f(sr,dr,sc-1,dc,n,grid) ) 
            return true ;
        
        grid[sr][sc] = 3 ;
        
        
        return false ;
        
    }
    
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here 
        int n = grid.size() ;
        
        int sr, sc, dr, dc ;
        
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if( grid[i][j] == 1 )
                {
                    sr = i ;
                    sc = j ;
                }
                else if( grid[i][j] == 2 )
                {
                    dr = i ;
                    dc = j ;
                }
            }
        }
        
        return f(sr,dr,sc,dc,n,grid);
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends