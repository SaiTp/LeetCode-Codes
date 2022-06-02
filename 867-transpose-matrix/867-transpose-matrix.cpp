class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
         int cc = A.size();     
        int rr = A[0].size(); 
        vector<vector<int>> res;
        vector<int> rv;
        
        for(int r = 0; r  < rr; r++)
        {
                rv.clear();
                for(int c = 0; c < cc; c++)
                {
                    rv.push_back(A[c][r]);
                }
                res.push_back(rv);
        }
        
        return res;
    }
};