// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    string findSubString(string str)
    {
        // Your code goes here 
       int n= str.length();
       
       unordered_map < char, int > m;
       int i=0, j=0, maxx= INT_MAX;
       string res;
       
       for (int i=0; i< n; i++){
 // only those elements appear only one time.       
             m[str[i]]= 0; 
   
       }
       int cnt=0;
       while (i< n){
           
           if (m[str[i]] == 0)
              cnt ++;
     // expand the window the increase by 1.         
            m[str[i]]+= 1; 
           
            
            if (cnt == m.size()){
                
        while (j < n and m[str[j]] > 1){
    
// shrink the window because duplicate elements                    
                      m[str[j]]--; 
                     
                      j++;
                 }
                 
                 if (maxx > (i-j+1)){
                     
                   maxx= i-j+1;
              res= str.substr (j, i-j+1);
                 }
                 
                 
            }
            i++;
       }
       
         return res;
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
        cout << ob.findSubString(str).size() << endl;
    }
    return 0;
}  // } Driver Code Ends