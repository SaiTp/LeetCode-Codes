class Solution {
public:
    int countPoints(string rings) {
        set<int>g,b,r;
        int res=0;
        int n=rings.size();
        for(int i=0;i<n;i+=2)
        {
            if(rings[i]=='B')
                b.insert(rings[i+1]-'0');
            else if(rings[i]=='R')
                r.insert(rings[i+1]-'0');
            else
                g.insert(rings[i+1]-'0');
        }
        for(int i=0;i<10;i++)
        {
            if(b.count(i) && (r.count(i) && g.count(i)))
                res++;
        }
        return res;
    }
};