// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here 
         set<char>s;
         for(int i=0;i<str.size();i++)
         s.insert(str[i]);
         
         int n=s.size();
         int i=0,j=0,ans=str.size();
         unordered_map<int,int>mp;
         
         while(i<str.size())
         {
             mp[str[i]]++;
             if(mp.size()==n)
             {
               while(mp[str[j]]>1)
               {
                   mp[str[j]]--;
                   j++;
               }
               ans=min(ans,i-j+1);
             }
             i++;
         }
         return ans;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends