// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    // Function to check if a palindrome pair exists
    bool isPalindromic(string s)
   {
       int i=0,j=s.size()-1;
       while(i<j)
       {
           if(s[i++]!=s[j--])
           return false;
       }
       return true;
   }
   bool palindromepair(int N, string arr[]) 
   {
       unordered_map<string,int>m;
       
       if(N<2)
       return false;
       
       for(int i=0;i<N;i++)
       {
           string s=arr[i];
           reverse(s.begin(),s.end());
           m[s]=i;
       }
       
       // Empty string Not given

      // Constraint |arr[i]|≥1
       
    /*   if(m.find("")!=m.end())
       {
           for(int i=0;i<N;i++)
           {
               if(isPalindromic(arr[i]) and i!=m[""])
               return true;
           }
       }
      */ 
       for(int i=0;i<N;i++)
       {   
           string s=arr[i];
           for(int j=0;j<s.size();j++)
           {  
               string left=s.substr(0,j);
               string right=s.substr(j);
               
               if(m.find(left)!=m.end() and isPalindromic(right) and m[left]!=i)
               return true;
               
               if(m.find(right)!=m.end() and isPalindromic(left) and m[right]!=i)
               return true;
           }
       }
       return false;
       
      
   }

};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends