class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       sort(g.begin(),g.end());
       sort(s.begin(),s.end());
        int i,j=0,res=0;
        for(i=0;i<g.size();i++)
        {
            for(;j<s.size();j++)
            {
                if(g[i]<=s[j])
                {
                    res++;
                    j++;
                    break;
                }
            }
        }
        return res;
    }
};