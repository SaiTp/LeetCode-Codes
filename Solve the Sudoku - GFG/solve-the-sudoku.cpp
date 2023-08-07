//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    
    bool isSafe(int grid[N][N],int x,int y,int val){
       for(int i=x,j=0;j<N;j++){
           if(grid[i][j]==val)return false;
       }
       for(int i=0,j=y;i<N;i++){
           if(grid[i][j]==val){
               return false;
           }
       }
       int nx=(x/3)*3;
       int ny=(y/3)*3;
       for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               if(grid[nx+i][ny+j]==val){
                   return false;
               }
           }
       }
       return true;
   }
   
   bool solve(int grid[N][N],int i,int j){
       if(i==N)return true;
       int nx=0,ny=0;
       if(j==N-1){
           nx=i+1;
           ny=0;
       }
       else{
           nx=i;
           ny=j+1;
       }
       if(grid[i][j]!=0){
           if(solve(grid,nx,ny))return true;
       }
       else{
           for(int pos=1;pos<=9;pos++){
               if(isSafe(grid,i,j,pos)){
                   grid[i][j]=pos;
                   if(solve(grid,nx,ny)){
                       return true;
                   }
                   grid[i][j]=0;
               }
           }
        }
       return false;
   }
   bool SolveSudoku(int grid[N][N])  
   { 
       // Your code here
       return solve(grid,0,0);
   }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        cout<<grid[i][j]<<" ";
    }
};


// } Driver Code Ends

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends