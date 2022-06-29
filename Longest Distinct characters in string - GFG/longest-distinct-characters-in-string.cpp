// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    unordered_map<int,int>mp;
    int i=0,j=0;
    int ans=1,n=S.size();
    while(i<n)
    {
        mp[S[i]]++;
        if(mp[S[i]]==1)
        {
            ans=max(ans,i-j+1);
            i++;
            continue;
        }
        else
        {
            while(mp[S[i]]!=1)
            {
               // ans=max(ans,i-j);
                mp[S[j]]--;
                j++;
               
            }
        }
        i++;
    }
    return ans;
}