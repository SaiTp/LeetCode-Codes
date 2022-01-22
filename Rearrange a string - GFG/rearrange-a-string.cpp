// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        map<char,int>mp;
        int c=0;
        for(int i=0;i<str.size();i++)
        if(str[i]>='A' && str[i]<='Z')
        mp[str[i]]++;
        else
        c+=str[i]-'0';
        str="";
        for(auto i :mp)
        {
            while(i.second>0)
            {
                str+=i.first;
                i.second--;
            }
        }
        str+=to_string(c);
        return str;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends