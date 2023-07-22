class Solution {
public:
    int minimumIndex(vector<int>& v) {
        int n=v.size();
        vector<pair<int,int>>l;
        int x;
        vector<pair<int,int>>r;
        map<int,int>m;
        int s=0;
        for(int i=0;i<n;i++)
        {
            m[v[i]]++;
            if(m[v[i]]>s)
            {
                s=m[v[i]];
                x=v[i];
            }
            l.push_back({s,x});
        }
        m.clear();
        s=0;
        x=0;
        for(int i=n-1;i>=0;i--)
        {
            m[v[i]]++;
            if(m[v[i]]>s)
            {
                s=m[v[i]];
                x=v[i];
            }
            r.push_back({s,x});
        }
        reverse(r.begin(),r.end());
        for(int i=0;i<n-1;i++)
        {   
            pair<int,int>a=l[i];
            pair<int,int>b=r[i+1];
            if(a.second==b.second && (a.first*2)>(i+1) && (b.first*2)>(n-(i+1)))
                return i;
        }
        return -1;
    }
};