class Solution {
public:
    bool func(string w,string p)
    {
        unordered_map<char,char>mp;
        for(int i=0;i<w.size();i++)
        {
            if(mp.find(w[i])==mp.end())
                mp[w[i]]=p[i];
            if(mp[w[i]]!=p[i])
                return false;
        }
        bool seen[26]={false};
        for(auto i:mp)
        {
            if(seen[i.second-'a'])
                return false;
            seen[i.second-'a']=true;
        }
        return true;
            
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>res;
        for(auto i:words)
            if(func(i,pattern))
                res.push_back(i);
        return res;
    }
};