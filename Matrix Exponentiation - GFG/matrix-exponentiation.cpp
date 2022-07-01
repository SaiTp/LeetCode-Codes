// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

long long int M=1e9+7;
class Solution{
public:
    void multiply(long long int a[2][2],long long int b[2][2])					{
        long long int x1 = ((a[0][0]*b[0][0])%M+ (a[0][1]*b[1][0])%M)%M,
        x2 = ((a[0][0]*b[0][1])%M+ (a[0][1]*b[1][1])%M)%M,
        x3 = ((a[1][0]*b[0][0])%M+ (a[1][1]*b[1][0])%M)%M,
        x4 = ((a[1][0]*b[0][1])%M+ (a[1][1]*b[1][1])%M)%M;
        a[0][0]=x1,a[0][1]=x2,a[1][0]=x3,a[1][1]=x4;
    }
    int FindNthTerm(long long int n) {
        long long int x[2][2]={{1,1},{1,0}},ans[2][2]={{1,0},{0,1}}; // ans is Identity Matrix
        if(!n)
            return 0;
        // multiply matrix x with itself n-1 times using Binary Exponentiation i.e x^n in log(n) time
        while(n){
            if(n&1)
                multiply(ans,x); //ans*=x
            multiply(x,x); //x*=x
            n>>=1;
        }
        return ans[0][0];
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int n;
		cin >> n;
		Solution obj;
		int ans = obj.FindNthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends