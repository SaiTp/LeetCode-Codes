class Solution {
public:
    bool check(string s)
    {
        int cf[26]={0},sf[26]={0};
        for(auto i:s)
        {
            if(i>='a' && i<='z')
                sf[i-'a']++;
            else
                cf[i-'A']++;
        }
        for(int i=0;i<26;i++)
        {
            if( (sf[i]==0 && cf[i]!=0) || (cf[i]==0 && sf[i]!=0) )
                return false;
        }
        return true;
    }
    string longestNiceSubstring(string s) {
        string res;
        for(int i=0;i<s.size();i++)
        {
            for(int j=2;j<=s.size()-i;j++)
            {
                string t=s.substr(i,j);
                //cout<<t<<endl;
                if(check(t))
                {
                    if(res.size()<t.size())
                        res=t;
                }
            }
        }
        return res;
    }
};