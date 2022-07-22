class Solution {
public:
    
    int countUnguarded(int n, int m, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        
        // initialize all the cells unvisited with 'u'
        
        vector<vector<char>> grid(n, vector<char> (m, 'u'));
        
        // mark the cell which contain wall with 'w'
        
        for(int i = 0; i < walls.size(); i++)
        {
            grid[walls[i][0]][walls[i][1]] = 'w';
        }
        
        // mark the cell which contain guard with 'g'
        
        for(auto v : guards)
        {
            grid[v[0]][v[1]] = 'g';
        }
        
        // iterate over guards matrix and mark the possible cell visited with 'v'
        
        for(auto v : guards)
        {
            // row no. of guard cell
            
            int row = v[0];
            
            // col no. of guard cell
            
            int col = v[1];
            
            // mark visited in up side 
            
            int i = row - 1;
            
            int j = col;
           
            while(i >= 0 && grid[i][j] != 'w' && grid[i][j] != 'g')
            {
                grid[i][j] = 'v';
                
                i--;
            }
            
            // mark visited in bottom side
            
            i = row + 1;
            
            j = col;
            
            while(i < n && grid[i][j] != 'w' && grid[i][j] != 'g')
            {
                grid[i][j] = 'v';
                
                i++;
            }
            
            // mark visited in left side
            
            i = row;
            
            j = col - 1;
            
            while(j >= 0 && grid[i][j] != 'w' && grid[i][j] != 'g')
            {
                grid[i][j] = 'v';
                
                j--;
            }
            
            // mark visited in right side
            
            i = row;
            
            j = col + 1;
            
            while(j < m && grid[i][j] != 'w' && grid[i][j] != 'g')
            {
                grid[i][j] = 'v';
                
                j++;
            }
        }
        
        // count all the unvisited cell
        
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 'u')
                    count++;
            }
        }
        
        return count;
    }
};