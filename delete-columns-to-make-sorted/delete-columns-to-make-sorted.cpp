class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int i,j,res=0;
        for(i=0;i<strs[0].size();i++)
            for(j=0;j<strs.size()-1;j++)
                if(strs[j][i]>strs[j+1][i])
                {
                    res++;
                    break;
                }
        return res;
    }
};