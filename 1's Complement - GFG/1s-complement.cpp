// { Driver Code Starts
 
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
  
class Solution{ 
public:
    string onesComplement(string s,int n){
        //code here
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            s[i]='1';
            else
            s[i]='0';
        }
        return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    }
}  // } Driver Code Ends