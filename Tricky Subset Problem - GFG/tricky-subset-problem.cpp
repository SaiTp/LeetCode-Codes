// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isPossible(long long S, long long N, long long X, long long A[])
    {
        // code here
        vector<long long> temp;
    temp.push_back(S);
    long long sum = 0, runningsum = 0;
    temp.push_back(S + A[0]);
    runningsum = temp[0] + temp[1];
    for(long long int i = 1; i < N; i++)
    {
    sum = A[i] + runningsum;
    if(sum > X) break;
    temp.push_back(sum);
    runningsum += sum;
    }
    int res = 0;
    for(long long int i = temp.size() - 1; i >= 0; i--)
    {
    if(temp[i] > X)
    continue;
    else
    {
    X -= temp[i];
    }
    if(X == 0)
    return 1;
    }
    return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long S, N, X;
        cin>>S>>N>>X;
        long long A[N];
        for(long long i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        if(ob.isPossible(S, N, X, A))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}  // } Driver Code Ends