class Solution {
public:
    string reverseWords(string s) {
        istringstream ss(s);
        string t,res;
        while(ss>>t)
        {
            res=t+" "+res;
        }
        res.pop_back();
        return res;
    }
};