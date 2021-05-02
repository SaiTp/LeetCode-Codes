class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
     int answer = 0, y , x;
    
    for(int i = 0; i != 8; i++)                             //search coordinates of rook
      for(int j = 0; j != 8; j++)
        if(board[i][j] == 'R') {x = j, y = i; break;}
    
    for(int i = y + 1; i != 8; i++)                         //search downward
      if(board[i][x] == 'B') break;
      else if(board[i][x] == 'p') {answer++; break;}
    
    for(int i = y - 1; i != -1; i--)                        //search upward
      if(board[i][x] == 'B') break;
      else if(board[i][x] == 'p') {answer++; break;}
    
    for(int j = x + 1; j != 8; j++)                         //search rightward
      if(board[y][j] == 'B') break;
      else if(board[y][j] == 'p') {answer++; break;}
    
    for(int j = x - 1; j != -1; j--)                        //search leftward
      if(board[y][j] == 'B') break;
      else if(board[y][j] == 'p') {answer++; break;}
    
    return answer;   
    }
};