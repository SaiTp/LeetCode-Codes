class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int fre[1001]={0};
        int i,j,f=0;
        if(trust.size()==0 && N==1)
            return 1;
        for(i=0;i<trust.size();i++)
        {
            fre[trust[i][1]]++;
        }
        for(i=0;i<1001;i++)
        {
            if(fre[i]==N-1)
            {
                j=i;
                f=1;
                break; 
            }
        }
        if(!f)
            return -1;
        for(i=0;i<trust.size();i++)
        {
            if(j==trust[i][0])
                return -1;
        }
        return j;
    }
};