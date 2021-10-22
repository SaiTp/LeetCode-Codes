class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;
        int temp=m[s[0]];
        for(auto t:m)
        {
            if(temp!=t.second)
                return false;
        }
        return true;
    }
};