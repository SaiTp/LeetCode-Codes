// { Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    vector<int> print_next_greater_freq(int arr[],int n)
    {
        // code here
        stack<int> s;
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++)freq[arr[i]]++;
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++){
            while(s.size()&&freq[arr[s.top()]]<freq[arr[i]]){
                ans[s.top()]=arr[i];
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}
  // } Driver Code Ends