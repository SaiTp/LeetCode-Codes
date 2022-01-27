// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int count(int N){
        // code here
        if(N%2!=0)
       return 0;
       
       else if(N==0)
       return 1;
       
       int res=0;
       for(int i=0;i<N;i+=2)
       res+=count(i)*count(N-2-i);
       
       return res;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends