// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    static bool mycmp(pair<int,int>p1,pair<int,int>p2)
    {
        return p1.second<p2.second;
    }
    vector<int> TopK(vector<int>& array, int k)
    {
        // code here
       /* vector<int>ans;
        map<int,int>mp;
        for(int i=array.size()-1;i>=0;i--)
        mp[array[i]]++;
        vector<pair<int,int>>v;
        for(auto i :mp)
        v.push_back({i.first,i.second});
        sort(v.begin(),v.end(),mycmp);
        //for(auto i:v)
        //cout<<i.first<<" ";
        int i=v.size()-1;
        while(k--)
        ans.push_back(v[i--].first);
        return ans;*/
         map<int ,int >mp;
        
        for (int i=0;i<array.size();i++)
        {
            mp[array[i]]++;
        }
        
        vector<pair<int ,int >>v;
        
        for ( auto i:mp)
        {
            v.push_back({i.second,i.first});
        }
        
        sort(v.begin(),v.end(),greater<pair<int ,int>>());
        
        vector<int >ans;
        
        for (auto i : v)
        {
            if (k>0)
            {
                ans.push_back(i.second);
                k--;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends