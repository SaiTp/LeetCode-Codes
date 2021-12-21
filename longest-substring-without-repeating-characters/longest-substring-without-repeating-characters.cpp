class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0,start=-1;
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            if(m.find(s[i])!=m.end() && m[s[i]]>start)
                start=m[s[i]];
            m[s[i]]=i;
            maxlen=max(maxlen,i-start);
        }
        return maxlen;
    }
};