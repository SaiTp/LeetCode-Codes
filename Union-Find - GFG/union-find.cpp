// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to merge two nodes a and b.
    int find(int x,int par[])
   {
       if(x==par[x])
       {
           return x;
       }
       
       int rep= find(par[x],par);
       par[x]=rep;
       return rep;
   }
   
   //Function to merge two nodes a and b.
   void union_( int x, int y, int par[], int rank1[]) 
   {
       //code here
       int x_rep=find(x,par);
       int y_rep=find(y,par);
       
       if(rank1[x_rep]>rank1[y_rep])
       {
           par[y_rep]=x_rep;
       }
       
       if(rank1[x_rep]<rank1[y_rep])
       {
           par[x_rep]=y_rep;
       }
       
       else
       {
           par[y_rep]=x_rep;
           x_rep++;
       }
   }
   
   //Function to check whether 2 nodes are connected or not.
   bool isConnected(int x,int y, int par[], int rank1[])
   {
       //code here
       int x_rep=find(x,par);
       int y_rep=find(y,par);
       
       return (x_rep==y_rep);
   }
};

// { Driver Code Starts.

int main() {
    //taking number of testcases
    int t;
    cin>>t;
    while(t--) {
        
        //taking number of elements
        int n;
        cin>>n;
        
        
        int par[n+1];
        int rank1[n+1];

        //initializing the parent and
        //the rank array
        for(int i=1; i<=n; i++) {
            par[i] = i;
            rank1[i] = 1;
    }
    
    //taking number of queries
    Solution obj;
    int q;
    cin>>q;
    while(q--) {    
        int a,b;
        char c;
        cin>>c>>a>>b;
        
        //if query type is 'U'
        //then calling union_ method
        if(c=='U')
        {
            obj.union_(a,b, par, rank1);
        }
        else//else calling isConnected() method
        cout<<obj.isConnected(a,b, par, rank1)<<endl;
    }
    }
    return 0;
}
  // } Driver Code Ends