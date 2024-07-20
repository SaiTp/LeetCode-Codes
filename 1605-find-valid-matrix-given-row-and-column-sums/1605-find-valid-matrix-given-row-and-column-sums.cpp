class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rs, vector<int>& cs) {
        int m,n;
        m=rs.size();
        n=cs.size();
        vector<vector<int>>v(m,vector<int>(n,0));
        int i,j;
        i=j=0;
        while(i<m && j<n)
        {
            int x=min(rs[i],cs[j]);
            v[i][j]=x;
            rs[i]-=x;
            cs[j]-=x;
            if(rs[i]==0)
                i++;
            if(cs[j]==0)
                j++;
        }
        return v;
    }
};