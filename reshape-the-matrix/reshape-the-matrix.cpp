class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
         int n=nums.size(),m=nums[0].size(),count=0;
        if(r*c!=n*m)
        {
            return nums;
        }
        vector<vector<int>>v(r,vector<int>(c));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                v[count/c][count%c]=nums[i][j];
                count++;
            }
        }
        return v;
    }
};