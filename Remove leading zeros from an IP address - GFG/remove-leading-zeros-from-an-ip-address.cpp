// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
  public:
    string newIPAdd (string s)
    {
        //code here.
        string res,temp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                if(temp.size()==0)
                {
                    res+="0.";
                }
                else
                res+=temp+".";
                temp="";
            }
            else
            {
                if(s[i]!='0' || temp.size()!=0)
                {
                    temp+=s[i];
                }
                
            }
        }
        if(temp.size()==0)
        {
            res+="0";
        }
        else
        res+=temp;
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.newIPAdd (s) << endl;
    }
}

  // } Driver Code Ends