// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string>v;
        string t,res;
        for(int i=0;S[i];i++)
        {
            if(S[i]=='.')
            {
                v.push_back(t);
                t="";
            }
            else
            t+=S[i];
        }
        v.push_back(t);
        reverse(v.begin(),v.end());
        for(auto i:v)
        {
            res+=i+".";
        }
        res.pop_back();
        return res;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends