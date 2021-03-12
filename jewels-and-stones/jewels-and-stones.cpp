class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res=0,i,j;
        for(i=0;i<jewels.size();i++)
        {
            for(j=0;j<stones.size();j++)
            {
                if(jewels[i]==stones[j])
                    res++;
            }
        }
        return res;
    }
};