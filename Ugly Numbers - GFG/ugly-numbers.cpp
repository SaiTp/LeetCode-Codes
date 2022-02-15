// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	     ull two=0, three=0, five=0;
    vector<ull> vec(n+1);
    vec[0]=1;
    for(int i=1; i<=n; i++) {
        ull two_v=vec[two]*2, three_v=vec[three]*3, five_v=vec[five]*5;
        vec[i] =min({ two_v , three_v , five_v});
        if( two_v   == vec[i] ) two++;
        if( three_v == vec[i] ) three++;
        if( five_v  == vec[i] ) five++;
    }
    return vec[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends