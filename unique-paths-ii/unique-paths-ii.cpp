class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
         if (obstacleGrid[0][0] == 1) 
            return 0;
        
        obstacleGrid[0][0] = 1;
        
        int n = obstacleGrid.size(), m = obstacleGrid[0].size();
        
        for (int i = 1; i < n; i++)
            obstacleGrid[i][0] = (obstacleGrid[i][0] == 0 && obstacleGrid[i-1][0] == 1) ? 1 : 0;

        for (int i = 1; i < m; i++)
            obstacleGrid[0][i] = (obstacleGrid[0][i] == 0 && obstacleGrid[0][i-1] == 1) ? 1 : 0;

        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
                obstacleGrid[i][j] = obstacleGrid[i][j] == 1 ? 0 : obstacleGrid[i-1][j] + obstacleGrid[i][j-1];
        
        return obstacleGrid[n-1][m-1];
    }
};