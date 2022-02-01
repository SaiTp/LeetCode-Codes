// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        mp[i]=0;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        int a=0,b=0;
        for(auto i :mp)
        {
        if(i.second==2)
        b=i.first;
        if(i.second==0)
        a=i.first;
        }
        int* ar = (int*) malloc(2*sizeof(int));
        ar[0]=b;
        ar[1]=a;
        return ar;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends