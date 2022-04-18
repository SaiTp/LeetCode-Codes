// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  const long long M=1000000007;
   long long karyTree(int k, int m) {
       //using binary exponentiation theorem
       // code here
        k%=M;
     long long res=1;
     while(m){
         if(m&1){
             res=((res%M)*(k%M))%M;
         }
         k=((k%M)*(k%M))%M;
         m>>=1;
     }
     return res;
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,m;
        
        cin>>k>>m;

        Solution ob;
        cout << ob.karyTree(k,m) << endl;
    }
    return 0;
}  // } Driver Code Ends