//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        vector<int> currency = {2000,500,200,100,50,20,10,5,2,1};
        vector<int> change;
        int i=0;
        while(N>0)
        {
            while(currency[i]>N)i++;
            int qty=N/currency[i];
            N=N%currency[i];
            for(int x=1;x<=qty;x++)
                change.push_back(currency[i]);
            i++;
        }
        return change;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends