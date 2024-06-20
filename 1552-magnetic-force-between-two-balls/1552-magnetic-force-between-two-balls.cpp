class Solution {
public:
    bool check(int mid,vector<int>& p, int m)
    {
        int pos=0,tot=1;
        for(int i=1;i<p.size();i++)
        {
            if(p[i]-p[pos]>=mid)
            {
                pos=i;
                tot++;
            }
        }
        return tot>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l=1,h=1e9+5;
        while(l<h)
        {
            int mid=(l+h+1)/2;
            if(check(mid,position,m))
                l=mid;
            else
                h=mid-1;
        }
        return l;
    }
};