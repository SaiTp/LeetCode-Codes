class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n=garbage.size();
        int ans=0;
        int lp=-1,lm=-1,lg=-1;
        vector<int>t(n,0);
        for(int i=1;i<n;i++)
            t[i]=t[i-1]+travel[i-1];
        for(int i=n-1;i>=0;i--)
        {
            ans+=garbage[i].size();
            for(int j=0;j<garbage[i].size();j++)
            {
                if(garbage[i][j]=='P' && lp==-1)
                    lp=i;
                if(garbage[i][j]=='G' && lg==-1)
                    lg=i;
                if(garbage[i][j]=='M' && lm==-1)
                    lm=i;
            }
        }
        if(lp!=-1)
        ans+=t[lp];
        if(lg!=-1)
        ans+=t[lg];
        if(lm!=-1)
        ans+=t[lm];
        return ans;
    }
};