class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int sf[26]={0},tf[26]={0};
        for(auto i : s)
            sf[i-'a']++;
        for(auto i : target)
            tf[i-'a']++;
        int res=INT_MAX;
        for(int i=0;i<26;i++)
        {
            if(tf[i]!=0)
            res=min(res,sf[i]/tf[i]);
        }
        return res;
    }
};