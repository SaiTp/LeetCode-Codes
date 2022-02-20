class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        string t;
        vector<string>res;
        for(int i=0;i<s.size();i++)
        {
            t+=s[i];
            if(t.size()==k)
            {
                res.push_back(t);
                t="";
            }
        }
        if(t.size()!=0)
        {
            while(t.size()!=k)
                t+=fill;
            res.push_back(t);
        }
        return res;
    }
};