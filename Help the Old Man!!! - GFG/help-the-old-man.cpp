// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
 vector<int> res;
    int count = 0;
    void movePlate(int n, int fb, int tb){
        count += 1;
        if(count == n){
            res.push_back(fb);
            res.push_back(tb);
            return;
        }
    }
    
    void movePile(int N, int n, int fb, int tb, int wb)
    {
        if(N >= 1 && count < n){
            movePile(N-1, n, fb, wb, tb);
            movePlate(n, fb, tb);
            if(res.size() > 0)
                return;
            movePile(N-1, n, wb, tb, fb);
        }
    }
    
    vector<int> shiftPile(int N, int n){
        movePile(N, n, 1, 3, 2);
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends