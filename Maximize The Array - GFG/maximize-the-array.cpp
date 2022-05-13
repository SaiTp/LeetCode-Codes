// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> maximizeArray(int arr1[], int arr2[], int n) {
            // code here 
            vector<int> temp;
       for(int i=0;i<n;i++)
       {
           temp.push_back(arr1[i]);
           temp.push_back(arr2[i]);
       }
       sort(temp.begin(),temp.end());
       
       set<int> s;
       for(int i=temp.size()-1;i>=0 && s.size()<n;i--)
       {
           s.insert(temp[i]);
       }
       set<int> check;
       vector<int> ans;
       
       for(int i=0;i<n;i++)
       {
           if(s.find(arr2[i])!=s.end() && check.count(arr2[i])==0)
           {
               ans.push_back(arr2[i]);
               check.insert(arr2[i]);
           }
       }
        for(int i=0;i<n;i++)
       {
           if(s.find(arr1[i])!=s.end() && check.count(arr1[i])==0)
           {
               ans.push_back(arr1[i]);
               check.insert(arr1[i]);
           }
       }
       return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.maximizeArray(arr1, arr2, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends