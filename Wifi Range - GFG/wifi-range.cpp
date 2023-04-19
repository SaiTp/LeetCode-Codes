//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
         for(int i=N-1;i>=0;i--){
            if(S[i]=='1')
            {   
                int t=X;
                int k=i-1;
                while(t&&k>=0){
                    if(S[k]=='0'){
                        S[k]='a';
                    }
                    k--;
                    t--;
                }
                t=X;
                k=i+1;
                while(t&&k<N){
                    if(S[k]=='0'){
                        S[k]='a';
                    }
                    k++;
                    t--;
                }
            }
        }
        for(auto i:S){
            if(i=='0')
                return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends