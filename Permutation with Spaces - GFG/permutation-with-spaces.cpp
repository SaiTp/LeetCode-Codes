// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:

    vector<string> permutation(string S){
        // Code Here
         vector <string> v;
        int n = S.size(), i = 0;
        queue <string> q;
        q.push("");
        n -= 1;
        while(n--){
            int len = q.size();
            while(len--){
                string s = q.front();
                q.pop();
                q.push(s+S[i]+" ");
                q.push(s+S[i]);
            }
            i += 1;
        }
        while(!q.empty()){
            v.push_back(q.front()+S[i]);
            q.pop();
        }
        return v;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends