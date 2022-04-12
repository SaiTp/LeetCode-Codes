class Solution {
public:
    int maxRow;
    int maxCol;
    
    void gameOfLife(vector<vector<int>>& board) {
        maxRow = board.size();
        maxCol = board[0].size();
        
        for (int i =0; i< maxRow; i++) {
            for (int j=0; j<maxCol; j++) {
                int curValue = board[i][j]&1;
                    
                int aliveNeighbors = findAliveNeighbors(board, i, j);
                if (curValue==0) {
                    if (aliveNeighbors==3) {
                        board[i][j] = board[i][j] | 2;
                    }
                }
                if (curValue==1) {
                    if(aliveNeighbors<2) {
                        board[i][j] = board[i][j] | 0;
                    } else if (aliveNeighbors<4) {
                        board[i][j] = board[i][j] | 2;
                    } else {
                        board[i][j] = board[i][j] | 0;
                    }
                }
            }
        }
        
        for (int i =0; i< maxRow; i++) {
            for (int j=0; j<maxCol; j++) {
                board[i][j] = board[i][j] >> 1;
            }
        }
    }
    
    int findAliveNeighbors(vector<vector<int>>& board, int row, int col){
        int top = max(0, row-1);
        int bottom = min(row+1, maxRow-1);
        
        int left = max(0, col-1);
        int right = min(col+1, maxCol-1);
        
        int live=0;
        for (int i=top; i<=bottom; i++) {
            for (int j=left; j<=right; j++){
                if (i==row && j==col)
                    continue;
                
                int cur = board[i][j] & 1;
                if (cur == 1)
                    live++;
            }
        }
        
        return live;
    }
};