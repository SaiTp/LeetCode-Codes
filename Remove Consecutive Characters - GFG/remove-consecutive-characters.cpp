// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        int n=S.size();
        stack<char>s;
        for(int i=0;i<n;i++)
        {
            if(s.empty() || s.top()!=S[i])
            s.push(S[i]);
        }
        string ans;
        while(!s.empty())
        {
        ans+=s.top();
        s.pop();
        }
     reverse(ans.begin(),ans.end());
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
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends