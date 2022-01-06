// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans = "";
        sort(arr , arr+N);
        string a = arr[0] , b = arr[N-1];
        int i = 0;
        while(i < min(a.length() , b.length())){
            if(a[i] == b[i])
            ans += a[i];
            else 
            break;
            i++;
        }
        return (ans == "" ? "-1" : ans);
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends