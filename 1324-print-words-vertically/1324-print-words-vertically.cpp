class Solution {
public:
    int findmx(string s)
    {
        stringstream ss(s);
        string t;
        int ans=0;
        while(ss>>t)
        {
            int x=t.size();
            ans=max(ans,x);
        }
        return ans;
    }
    inline std::string& rtrim(std::string& s, const char* t = " \t\n\r\f\v")
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}
    vector<string> printVertically(string s) {
        int mx=findmx(s);
        stringstream ss(s);
        string t;
        vector<string>ans(mx);
        while(ss>>t)
        {
            
            for(int i=0;i<t.size();i++)
                ans[i]+=t[i];
            for(int i=t.size();i<mx;i++)
                ans[i]+=" ";
        }
        for(int i=0;i<mx;i++)
        {
            rtrim(ans[i]);
        }
                
        return ans;
    }
};