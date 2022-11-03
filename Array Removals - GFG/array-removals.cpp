//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        //Code here
           sort(arr.begin(),arr.end());
        int last = 0, first = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            while(arr[i] - arr[first] > k)
            {
                first ++;
            }
            last = max(last, i-first + 1);
        }
        return (int) arr.size() - last;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends