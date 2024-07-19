class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector <int> out,rm,cm;
        int i,j,m,t;
        for(i=0;i<matrix.size();i++)
        {
            rm.push_back(*min_element(matrix[i].begin(), matrix[i].end()));
        }
        for(j=0;j<matrix[0].size();j++)
        {
            m=-1;
            for(i=0;i<matrix.size();i++)
            {
                if(m<matrix[i][j])
                    m=matrix[i][j];
            }
            cm.push_back(m);
        }
        for(i=0;i<matrix.size();i++)
        {
            //cout<<rm[i]<<" "<<cm[i]<<"\n";
            for(j=0;j<matrix[i].size();j++)
            {
                if(rm[i]==cm[j])
                out.push_back(rm[i]);   
            }
        }
        return out;
    }
};