class Solution {
public:
    string makeFancyString(string s) {
         int counter=1;
        char previous=s[0];
        string ans="";
        ans+=s[0];
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==previous)
                counter++;
            else
            {
                previous=s[i];
                counter=1;
            }
            if(counter<3)
                ans+=s[i];
        }
        return ans;
    }
};