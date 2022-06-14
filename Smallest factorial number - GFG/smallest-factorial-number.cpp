// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int numZeros(int num) {
            int cnt = 0;
            while(num) {
                cnt += num / 5;
                num /= 5;
            }
            return cnt;
        }
        
        int findNum(int n) {
            int dummy = n * 5, lo = 1, hi = dummy, mid;
            while(lo < hi) {
                mid = lo + (hi - lo) / 2;
                if(numZeros(mid) < n)
                    lo = mid + 1;
                else
                    hi = mid;
            }
            return lo;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends