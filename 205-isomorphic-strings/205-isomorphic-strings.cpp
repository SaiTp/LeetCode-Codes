class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m1,m2;
        int n,m;
        n=s.size();
        m=t.size();
        if(n!=m)
            return false;
        for(int i=0;i<n;i++)
        {
            if(m1.find(s[i])!=m1.end() && m1[s[i]]!=t[i] || 
              m2.find(t[i])!=m2.end() && m2[t[i]]!=s[i])
                return false;
            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
        return true;
    }
};