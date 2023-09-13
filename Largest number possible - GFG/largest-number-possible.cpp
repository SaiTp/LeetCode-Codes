//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        if(9*N<S)
        return "-1";
        if(S==0)
        {
        if(N==1)
            return "0";
            else
            return "-1";
        }
        string res;
        while(N && S)
        {
            if(S>=9)
            {
                res+="9";
                S-=9;
            }
            else
            {
                res+=to_string(S);
                S=0;
            }
            N--;
        }
        while(N--)
        {
            res+="0";
        }
        return res;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends