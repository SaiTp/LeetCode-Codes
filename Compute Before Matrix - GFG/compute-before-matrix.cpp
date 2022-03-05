// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<vector<int>> computeBeforeMatrix(int n, int m, vector<vector<int>> after){
        // Code here
        vector<vector<int>> temp(n+1,vector<int>(m+1,0));
       for(int i=1;i<=n;i++){
           for(int j=1;j<=m;j++){
               temp[i][j]=after[i-1][j-1];
           }
       }
       for(int i=1;i<=n;i++){
           for(int j=1;j<=m;j++){
               after[i-1][j-1]=temp[i][j]-temp[i-1][j]-temp[i][j-1]+temp[i-1][j-1];
           }
       }
       return after;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M; 
        vector<vector<int>> after(N,vector<int>(M));
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                cin>>after[i][j];
            }
        } 
        Solution obj;
        vector<vector<int>> before=obj.computeBeforeMatrix(N,M,after); 
        for(int i=0;i<before.size();i++){
            for(int j=0;j<before[i].size();j++){
                cout<<before[i][j]<<' ';
            } 
            cout<<endl;
        }
    }
}  // } Driver Code Ends