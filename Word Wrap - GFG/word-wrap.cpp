// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
long long int dp[505];
    long long int solver(int ind, int k, vector<int> &arr, int pre){
        int n = arr.size(); 
        if(ind==n) return (-1 * pre);
        if(dp[ind]!=-1) return dp[ind];
        int prev = 0;
        long long int ans = INT_MAX;
        for(int i = ind; i < n; i++){
            prev += arr[i];
            if(prev > k) break;
            int x = ((k-prev)*(k-prev));
            long long int temp = x + solver(i+1, k, arr, x);
            ans = min(ans, temp);
            prev += 1;
        }
        
        return dp[ind]=ans;
    }

    int solveWordWrap(vector<int> &nums, int k) 
    { 
        
        memset(dp, -1, sizeof(dp));
        return solver(0, k,nums,0);
    }  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}  // } Driver Code Ends