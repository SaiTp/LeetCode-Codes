// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
         int dir[] = {0, 1, 0, -1, 0};
        int n = matrix.size(), m = matrix[0].size();
        int i = 0, j = 0, d = 0;
        while(1){
            if(matrix[i][j] != 0){
                d = (d+1)%4;
                matrix[i][j] = 0;
            }
            
            int ni = i + dir[d], nj = j + dir[d+1];
            if(ni < 0 || ni >= n || nj < 0 || nj >= m){
                return {i, j};
            }
            i = ni; 
            j = nj;
        }
        return make_pair(0, 0);
    }

};

// { Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}  // } Driver Code Ends