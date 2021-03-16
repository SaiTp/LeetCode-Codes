class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector <int> res;
        int temp[100][2],i,j,t;
        for(i=0;i<mat.size();i++)
        {
            t=0;
            for(j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==0)
                    break;
                t++;
            }
            temp[i][0]=i;
            temp[i][1]=t;
        }
        for(i=0;i<mat.size()-1;i++)
        {
            for(j=0;j<mat.size()-i-1;j++)
            {
                if(temp[j][1]>temp[j+1][1])
                {
                    t=temp[j][1];
                    temp[j][1]=temp[j+1][1];
                    temp[j+1][1]=t;
                    t=temp[j][0];
                    temp[j][0]=temp[j+1][0];
                    temp[j+1][0]=t;
                }
            }
        }
        for(i=0;i<k;i++)
            res.push_back(temp[i][0]);
        return res;
    }
};