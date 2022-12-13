class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) {
         int n = m.size();
        
        for (int i = n-2; i >= 0; --i)
            for (int j = n-1; j >= 0; --j)
                m[i][j] += min({ m[i+1][max(j-1,0)] , 
                                 m[i+1][j] , 
                                 m[i+1][min(j+1,n-1)] });
        
        return *min_element(m[0].begin(), m[0].end());
    }
};