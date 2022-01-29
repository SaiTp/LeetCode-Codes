// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        int l,h,e=1;
        int n=s.size(),start=0;
        for(int i=1;i<s.size();i++)
        {
            l=i-1;
            h=i;
            while(l>=0 && h<n && s[l]==s[h])
            {
                if(h-l+1>e)
                {
                    start=l;
                    e=h-l+1;
                }
                l--;
                h++;
            }
            //odd length
            l=i-1;
            h=i+1;
            while(l>=0 && h<n && s[l]==s[h])
            {
                if(h-l+1>e)
                {
                    start=l;
                    e=h-l+1;
                }
                l--;
                h++;
            }
        }
        string res;
        for(int i=start;i<start+e;i++)
        res+=s[i];
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends