// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}// } Driver Code Ends


vector<int> permute(vector<vector<int>> &arr, int n)
{
    
    // Complete the function
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++)
    {
       p.push_back(make_pair(arr[i][0]+arr[i][1],i+1));
    }
    sort(p.begin(),p.end());
    vector<int>ans;
    for(int i=0;i<p.size();i++)
    {
        ans.push_back(p[i].second);
    }
   
    return ans;
}