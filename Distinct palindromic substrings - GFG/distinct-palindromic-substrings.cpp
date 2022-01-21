// { Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int palindromeSubStrs(string s) {
        // code here
        unordered_map<string, int>mp;
       for(int i=0; i<s.length(); i++)
       {
           //Odd length
           for(int j=0; j<=i; j++)
           {
               if(!s[i+j])
                   break;
               if(s[i-j]==s[i+j])
               {
                   mp[s.substr(i-j,(i+j+1)-(i-j))]++;
               }else
                   break;
           }
           //Even Length
           for(int j=0; j<=i; j++)
           {
               if(!s[i+j+1])
                   break;
               if(s[i-j]==s[i+j+1]){
                       mp[s.substr((i-j), (i+j+2)-(i-j))]++;
               }else
                   break;
           }
       }
       return mp.size();
    }
};

// { Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}
  // } Driver Code Ends