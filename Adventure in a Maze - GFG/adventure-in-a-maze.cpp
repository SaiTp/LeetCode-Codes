// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
vector<int> FindWays(vector<vector<int>>&mat){
    // Code here
    int n = mat.size(), mod = 1e9 + 7;
    pair<int, int> dp[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = {0, mat[i][j]};
    dp[0][0].first = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int upPaths = 0, leftPaths = 0, upSum = 0, leftSum = 0;
            if (i > 0 && (mat[i - 1][j] == 2 or mat[i - 1][j] == 3) && dp[i - 1][j].first)
            {
                upPaths = dp[i - 1][j].first;
                upSum = dp[i - 1][j].second;
            }
            if (j > 0 && (mat[i][j - 1] == 1 or mat[i][j - 1] == 3) && dp[i][j - 1].first)
            {
                leftPaths = dp[i][j - 1].first;
                leftSum = dp[i][j - 1].second;
            }
            dp[i][j] = {max(dp[i][j].first, (leftPaths + upPaths) % mod),
                        (dp[i][j].second + max(leftSum, upSum)) % mod};
        }
    }

    vector<int> ans(2);
    ans[0] = (dp[n - 1][n - 1].first % mod);
    ans[1] = ((dp[n - 1][n - 1].first ? dp[n - 1][n - 1].second : 0));
    return ans;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		}
		Solution obj;
		vector<int> ans = obj.FindWays(matrix);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends