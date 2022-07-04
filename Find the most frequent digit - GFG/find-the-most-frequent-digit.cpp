// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int solve(string s);
int main()
{
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
        
    }
}// } Driver Code Ends



int solve(string N)
{
    //code here
    int f[9]={0};
    for(int i=0;i<N.size();i++)
    {
        f[N[i]-'0']++;
    }
    int ans=0,max=0;
    for(int i=0;i<10;i++)
    {
        if(max<=f[i])
        {
            max=f[i];
            ans=i;
        }
    }
    return ans;
}
