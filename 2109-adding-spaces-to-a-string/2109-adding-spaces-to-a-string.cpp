class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string res;
        int n=s.size(),k=spaces.size();
        int j=0,i;
        for(i=0;i<n && j<k;i++)
        {
            if(i==spaces[j])
            {
                res+=" ";
                j++;
                res+=s[i];
            }
            else
                res+=s[i];
        }
        for(;i<n;i++)
            res+=s[i];
        return res;
    }
};