class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int i,c=0;
        vector<int> temp;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]==s2[i])
                c++;
            else
                temp.push_back(i);
        }
        
        if(s1.size()<3)
        {
            if(c<s1.size())
                return false;
            return true;
        }
        if((s1.size()-c)%2)
            return false;
        if(c<s1.size()-2)
            return false;
        if(c==s1.size())
            return true;
        if(s1[temp[0]]==s2[temp[1]] && s1[temp[1]]==s2[temp[0]])
            return true;
        return false;
    }
};