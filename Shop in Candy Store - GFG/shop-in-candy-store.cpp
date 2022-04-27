// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int a[], int n, int k)
    {
        // Write Your Code here
        sort(a,a+n);
        int s1=0,s2=0;
        int it=n%(k+1)==0 ? n/(k+1) : n/(k+1)+1;
        for(int i=0;i<it;i++)
        {
            s1+=a[i];
            s2+=a[n-i-1];
        }
        vector<int>res(2);
        res[0]=s1;
        res[1]=s2;
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends