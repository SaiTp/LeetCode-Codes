// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    sort(a,a+n,greater<int>());
    vector<int>res(n);
    int k=0,sum=0;
    for(int i=0;i<n;i+=2)
    {
        res[i]=a[k++];
        sum+=res[i];
    }
    if(n%2)
    n-=2;
    else
    n-=1;
    for(int i=n;i>=1;i-=2)
    {
        res[i]=a[k++];
        sum-=res[i];
    }
    if(!sum)
    return {-1};
    return res;
}
