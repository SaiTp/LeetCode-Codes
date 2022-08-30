class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         for(int i =0;i<matrix.size();i++){
            for(int j=i;j<matrix.size();j++){      // j starts from i so that positions are't swapped twice
             swap(matrix[i][j],matrix[j][i]);       // we are just traversing the upper matrix and diagonal
            }
        }
        for(int i =0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};