class Solution {
public:
    bool wordPattern(string pattern, string s) {
     if(pattern.size()!=(count(s.begin(), s.end(), ' ')+1))
            return false;
        unordered_map<char,string> m;
        unordered_map<string,int> n;
        
        string word;
        stringstream str(s);
        for(auto a:pattern)
        {   str>>word;
            if((m[a]=="" && n[word]==0) || m[a]==word)
            {m[a]=word;
             n[word]=a;
            }
            else
                return false;
        }
        return true;
    }
};