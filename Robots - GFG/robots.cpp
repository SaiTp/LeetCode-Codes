// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    string moveRobots(string s1, string s2){
        // code here 
        int cia=0,cib=0,cfa=0,cfb=0;
        int n=s1.size();
        string t1,t2;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='A' || s1[i]=='B')
            t1+=s1[i];
            if(s2[i]=='A' || s2[i]=='B')
            t2+=s2[i];
        }
        int ia[n]={0};
        int ib[n]={0};
        int fa[n]={0};
        int fb[n]={0};
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='A')
            cia++;
            else if(s1[i]=='B')
            cib++;
            ia[i]=cia;
            ib[i]=cib;
        }
        for(int i=0;i<n;i++)
        {
            if(s2[i]=='A')
            cfa++;
            else if(s2[i]=='B')
            cfb++;
            fa[i]=cfa;
            fb[i]=cfb;
        }
        
        if(t1==t2)
        {
        for(int i=0;i<n;i++)
        if(fa[i]<ia[i])
        return "No";
        for(int i=0;i<n;i++)
        if(fb[i]>ib[i])
        return "No";
        return "Yes";
        }
        return "No";
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        
        Solution ob;
        cout << ob.moveRobots(s1, s2) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends