// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int>mp;
        int ma=INT_MIN;
        string ans;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]>ma)
            ma=mp[arr[i]];
        }
        int sma=0;
        for(int i=0;i<n;i++)
        {
        if(mp[arr[i]]>sma && mp[arr[i]]!=ma)
        sma=mp[arr[i]];
        }
        for(auto i:mp)
        if(i.second==sma)
        ans=i.first;
        return ans;
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
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends