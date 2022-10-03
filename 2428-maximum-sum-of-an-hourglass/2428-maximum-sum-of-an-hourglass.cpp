class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
         int m = grid.size();
        int n = grid[0].size();
        if (m<3 || n<3) return 0;
        int maxSum = 0;
        for(int i=0; i<=m-3; i++) {
            for(int j=0; j<=n-3; j++) {
                int sum = 0;
                for(int k=0; k<=2; k++) {
                    if(k==0 || k==2) sum += grid[i][j+k] + grid[i+2][j+k];
                    else if(k==1) sum += grid[i][j+k] + grid[i+1][j+k] + grid[i+2][j+k];
                }
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }
};