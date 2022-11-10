//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long jumpingNums(long long x) {
        // code here
         if(x <= 10){
            return x;
        }
        queue<long long> q;
        for(int i = 1; i <= 9; i++){
            q.push(i);
        }
        long long res = 0;
        while(q.empty() == false){
            auto curr = q.front();
            q.pop();
            res = max(curr, res);
            long long newCurr = curr*10 + (curr % 10);
            if((curr % 10) > 0 && newCurr - 1 <= x){
                q.push(newCurr - 1);
            }
            if((curr % 10) < 9 && newCurr + 1 <= x){
                q.push(newCurr + 1);
            }
        }
        return res;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends