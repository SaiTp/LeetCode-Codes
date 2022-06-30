// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int ans=0;
        int i=0,f=0;
        if(str[0]=='-')
        {
            f=1;
            i++;
        }
        for(;i<str.size();i++)
        {
            int t=str[i]-'0';
            if(t>=0 && t<=9)
            ans=ans*10+t;
            else
            return -1;
        }
        
        if(f)
        return -ans;
        
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
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends