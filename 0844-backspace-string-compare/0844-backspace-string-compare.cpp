class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,t1;
        for(int i=0;i<s.size();i++)
        {
            if(s1.size()>0 && s[i]=='#')
                s1.pop_back();
            else if(s[i]=='#')
                continue;
            else
                s1+=s[i];
        }
         for(int i=0;i<t.size();i++)
        {
            if(t1.size()>0 && t[i]=='#')
                t1.pop_back();
            else if(t[i]=='#')
                continue;
            else
                t1+=t[i];
        }
        cout<<s1<<" "<<t1;
        return s1==t1;
    }
};