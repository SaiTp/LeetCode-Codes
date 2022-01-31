// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int value(char roman){
     switch(roman){
         case 'I':return 1;
         case 'V':return 5;
         case 'X':return 10;
         case 'L':return 50;
         case 'C':return 100;
         case 'D':return 500;
         case 'M':return 1000;
     }
 }
   int romanToDecimal(string &str) {
       
       int n = str.size()-1,p=0,ans=0;
       
       for(int i=n;i>=0;i--){
           if(value(str[i])>=p){
               ans=ans+value(str[i]);
           }
           else{
               ans=ans-value(str[i]);
           }
           
           p=value(str[i]);
       }
       
       return ans;
       
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends