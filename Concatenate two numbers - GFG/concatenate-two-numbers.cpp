// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int n, int X, vector<int> numbers){
        // code here
        map<string,int>mp;
        for(auto i : numbers)
        mp[to_string(i)]++;
        long long res=0;
        string x=to_string(X);
        for(auto i:mp)
        {
            if(i.first.size()>=x.size())
            continue;
            int ind=x.find(i.first);
            string r=x.substr(i.first.size());
            if(ind ==0 && mp[i.first])
            {
                int val=mp[r];
                if(r==i.first)
                res+=val*(val-1);
                else
                res+=val*i.second;
            }
        }
        return res;
    }
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}  // } Driver Code Ends