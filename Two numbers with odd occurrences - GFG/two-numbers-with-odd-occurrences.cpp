//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
          vector<long long>ans;
        long long as=0;
        
        for(long long  i=0;i<N;i++)
        {
            as=as^Arr[i];
        }
        
        long long last_bit=(as)&(~as+1);
        long long f_ans=0,s_ans=0;
        // cout<<last_bit;
        for(long long i=0;i<N;i++)
        {
            if((last_bit&Arr[i])!=0)
            {
                // cout<<Arr[i]<<" ";
                f_ans^=Arr[i];
            }
            else
            {
                s_ans^=Arr[i];
            }
        }
        ans.push_back(f_ans);
        ans.push_back(s_ans);
        // cout<<f_ans;
        sort(ans.begin(),ans.end(),greater<int>());
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends