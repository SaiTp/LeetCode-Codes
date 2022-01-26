// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
         vector<int> v;
       int row=Mat.size();
       int col=Mat[0].size(),k=0,j;
       
       for(int i=0;i<row;i++){
           for(int j=0;j<col;j++){
               v.push_back(Mat[i][j]);
           }
       }
       sort(v.begin(), v.end());
        for(int i=0;i<row;i++){
         
           for(j=0;j<col;j++){
                Mat[i][j]=v[j+k];
                
           }
             k=j*(i+1);
       }
       return Mat;
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends