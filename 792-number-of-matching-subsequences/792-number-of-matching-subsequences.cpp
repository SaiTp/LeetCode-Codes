class Solution {
public:
    bool issubsequence(string s1,string s2)
    {
        int j=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==s2[j])
                j++;
            if(j==s2.size())
                return true;
        }
        return j==s2.size();
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int c=0,n=words.size();
        unordered_map<string,int>mp;
        for(auto i:words)
            mp[i]++;
        for(auto i:mp)
        {
            if(issubsequence(s,i.first))
                c+=i.second;
        }
        return c;
    }
};