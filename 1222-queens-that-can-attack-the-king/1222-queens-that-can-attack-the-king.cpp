class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>>ans;
        //up down left right drup drdn dlup dldn
        vector<int>dx = {-1,1,0,0,-1,1,-1,1};
        vector<int>dy = {0,0,-1,1,1,1,-1,-1};
        
        vector<vector<int>>board(8,vector<int>(8,0));
        for(int i = 0; i<queens.size(); i++){
            board[queens[i][0]][queens[i][1]] = 1;    
        }
        
        for(int i = 0; i<8; i++){
            
            int kr = king[0];
            int kc = king[1];
            
            while(kr<8 and kr>=0 and kc<8 and kc>=0){
                if(board[kr][kc] == 1){
                    ans.push_back({kr,kc});
                    break;
                }
                kr+=dx[i];
                kc+=dy[i];
            }
        }
        
        return ans;
    }
};