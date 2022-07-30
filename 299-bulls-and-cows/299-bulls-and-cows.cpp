class Solution {
public:
    string getHint(string s, string g) {
        int c=0,b=0,n=s.size();
        string res;
        vector<int>v(11,0);
        for(int i=0;i<n;i++)
            v[s[i]-'0']++;
        for(int i=0;i<n;i++)
        {
            if(s[i]==g[i])
            {
                b++;
                v[s[i]-'0']--;
            }
        
                
        }
         for(int i=0;i<n;i++)
        {
            if(s[i]!=g[i])
            if(v[g[i]-'0']>0)
                {
                    v[g[i]-'0']--;
                    c++;
                }
        }
        res+=to_string(b)+"A"+to_string(c)+"B";
        return res;
    }
};