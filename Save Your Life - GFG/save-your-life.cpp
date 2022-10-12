//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here      
           string res = "";
        unordered_map<char,int>mp;
        for(int i = 0; i<n; i++)  
        mp[x[i]] = b[i];
        int maxRes =  INT_MIN;
        int currSum = 0, startIndex = 0;
        for(int i = 0; i<w.size(); i++){
            int ascii = mp.find(w[i]) != mp.end() ? mp[w[i]] : (int)w[i];
            currSum += ascii;
            if(currSum>maxRes){
                maxRes = currSum;
                res = w.substr(startIndex, i-startIndex+1);
            }
            if(currSum<0)   currSum = 0, startIndex = i+1;
        }
        return res;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends