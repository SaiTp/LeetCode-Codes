// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minSteps(int A[], int N, int K) {
        // code here
        int prefix[N];
        prefix[0] = A[0];
        sort(A,A+N);
        for(int i=1;i<N;i++)
        {
           prefix[i]= prefix[i-1]+A[i];
        }
        int sum = INT_MAX;
        int prev=0;
        for(int i=0;i<N;i++)
        {
            int c=1;
            while(i+1<N && A[i]==A[i+1])
            {
                c++;
                i++;
                continue;
            }
            int per = A[i]+K;
            int ind=upper_bound(A,A+N,per)-A;
            int actsum = prefix[N-1]-prefix[ind-1];
            int red = (N-ind)*per;
            actsum-=red;
            sum = min(sum,actsum+prev);
            prev+=(A[i]*c);
        }
        return sum;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin>>N>>K;
        
        int A[N];
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.minSteps(A,N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends