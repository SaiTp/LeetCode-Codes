// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string S){
        // code here 
        string x;
        x+=S[0];
        int n=S.size(),l=0;
         for(int i=0;i<n;i++) //even length
        {
            int i1=i,i2=i+1;
            while(i1>=0 && i2<n)
            {
                if(S[i1]==S[i2])
                {
                    int len=i2-i1+1;
                    if(l<len)
                    {
                        l=len;
                        x=S.substr(i1,len);
                    }
                   
                }
                else
                break;
                 i1--;
                    i2++;
            }
        }
        for(int i=0;i<n;i++) //odd length
        {
            int i1=i-1,i2=i+1;
            while(i1>=0 && i2<n)
            {
                
                if(S[i1]==S[i2])
                {
                    int len=i2-i1+1;
                    if(l<len)
                    {
                        l=len;
                        x=S.substr(i1,len);
                    }
                    
                }
                else
                break;
                i1--;
                i2++;
            }
        }
       
        
        return x;
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends