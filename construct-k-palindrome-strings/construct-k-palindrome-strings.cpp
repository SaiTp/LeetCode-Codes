class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k)
            return false;
        int freq[26]={0};
        int i,se=0;
        for(i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(freq[i]%2)
                se++;
        }
        if(se>k)
            return false;
        return true;
    }
};