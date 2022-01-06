class Solution {
public:
    bool checkString(string s) {
        int f=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
                f=0;
            if(!f && s[i]=='a')
                return false;
        }
        return true;
    }
};