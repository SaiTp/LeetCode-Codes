class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,int>mp;
        for(auto s: emails)
        {
            string e,d;
            int i,f=0;
            for(i=0;s[i]!='@';i++)
            {
                if(s[i]=='.')
                    continue;
                if(s[i]=='+')
                {
                    f=1;
                    break;
                }
                e+=s[i];
            }
            if(f)
            {
              for(i=0;s[i]!='@';i++);
            }
            i++;
            for(;s[i]!='\0';i++)
                d+=s[i];
            reverse(d.begin(),d.end());
            e=e+d;
            mp[e]++;
        }
        return mp.size();
    }
};