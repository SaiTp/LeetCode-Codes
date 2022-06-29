// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    vector<int> common_element(vector<int>v1,vector<int>v2)
    {
        // Your code here
        vector<int>res;
        map<int,int>mp;
        for(auto i:v1)
        mp[i]++;
        for(auto i:v2)
        {
            if(mp[i]>=1)
            {
                res.push_back(i);
                mp[i]--;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int m;
        cin>>m;
        vector<int>v2(m,0);
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }
        Solution ob;
        vector<int>result;
        result=ob.common_element(v1,v2);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}  // } Driver Code Ends