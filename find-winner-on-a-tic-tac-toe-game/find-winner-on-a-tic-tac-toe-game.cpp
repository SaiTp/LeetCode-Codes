class Solution {
public:
   void Fillgrid(vector<vector<int>>& m, vector<vector<int>> &grid){
    for(int i = 0; i < m.size(); i++)
      if(i%2 == 0) grid[m[i][0]][m[i][1]] = 1;
      else grid[m[i][0]][m[i][1]] = 0;
  }
  
  bool IsWon(vector<vector<int>> &grid, int t){
    for(int i = 0 ; i < 3; i++){
      if(grid[i][0] == t && grid[i][1] == t && grid[i][2] == t) return true;
      if(grid[0][i] == t && grid[1][i] == t && grid[2][i] == t) return true;
    }
    if(grid[0][0] == t && grid[1][1] == t && grid[2][2] == t) return true;
    if(grid[2][0] == t && grid[1][1] == t && grid[0][2] == t) return true;
    return false;
  }
  
  string tictactoe(vector<vector<int>>& moves) {
    vector<vector<int>> grid(3,vector<int>(3,2));
    Fillgrid( moves, grid);
    
    if(IsWon(grid,1)) return "A";
    if(IsWon(grid,0)) return "B";
    if(moves.size() == 9) return "Draw";
    return "Pending";
  }
};