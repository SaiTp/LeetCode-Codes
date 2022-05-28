// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int shortestPath( int x, int y){ 
        // code here 
         int levx = log2(x) + 1;
        int levy = log2(y) + 1;
        if(levx > levy)
        return shortestPath(y , x);
        int cnt = 0;
        while(levy > levx){
            y /= 2;
            levy--;
            cnt++;
        }
        while(x !=y){
            x /=2 , y /= 2;
            cnt += 2;
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<< ob.shortestPath(x,y) << endl;
    }
    return 0; 
}   // } Driver Code Ends