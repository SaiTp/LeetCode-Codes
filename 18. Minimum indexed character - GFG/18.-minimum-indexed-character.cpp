// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        map<char,int>mp;
        for(int i=0;i<str.size();i++)
        if(mp.find(str[i])==mp.end())
        mp[str[i]]=i;
        int m=INT_MAX;
        for(int i=0;i<patt.size();i++)
        {
            if(mp.find(patt[i])!=mp.end() && m>mp[patt[i]])
            m=mp[patt[i]];
        }
        if(m==INT_MAX)
        return -1;
        return m;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}
  // } Driver Code Ends