class Solution {
public:
    bool isgood(string str)
    {
        set<char>s(str.begin(),str.end());
        return str.size()==s.size();
    }
    int countGoodSubstrings(string s) {
        int res=0;
        if(s.size()<3)
            return 0;
        for(int i=0;i<s.size()-2;i++)
        {
            cout<<s.substr(i,3)<<endl;
            if(isgood(s.substr(i,3)))
                res++;
        }
        return res;
    }
};