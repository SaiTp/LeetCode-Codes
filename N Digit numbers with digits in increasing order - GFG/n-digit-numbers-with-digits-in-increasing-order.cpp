// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void recFunc(int n , int num , vector<int> &ans , int s){
        if(n==0){
            ans.push_back(num);
            return;
        }
        for(int i=s ; i<= 9 ; i++){
            recFunc(n-1 , num*10+i , ans , i+1);
        }
    }
    vector<int> increasingNumbers(int N){
        vector<int> ans;
        if(N==1) ans.push_back(0);
        recFunc(N , 0 , ans , 1);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.increasingNumbers(N);
        for(auto num : ans){
            cout<< num <<" ";
        }
        cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends