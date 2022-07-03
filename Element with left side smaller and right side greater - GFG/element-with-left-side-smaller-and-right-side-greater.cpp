// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    int temp[n],min;
    min=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<min)
        min=arr[i];
        temp[i]=min;
    }
    int max=arr[0];
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>=max && temp[i]>=arr[i])
        return arr[i];
        if(max<arr[i])
        max=arr[i];
    }
    return -1;
}