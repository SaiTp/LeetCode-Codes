class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        int ns=original.size();
        if(ns!=m*n)
            return ans;
        int k=0;
        vector<int>t;
        for(int i=0;i<ns;i++)
        {
            if(k==n)
            {
                k=0;
                ans.push_back(t);
                t.clear();
                i--;
            }
            else
            {
                t.push_back(original[i]);
                k++;
            }
                
        }
        ans.push_back(t);
        return ans;
    }
};