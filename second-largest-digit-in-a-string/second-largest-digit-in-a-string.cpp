class Solution {
public:
    int secondHighest(string s) {
        int f[10]={0};
        int i,flag=0;
        for(i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
                f[s[i]-48]++;
        }
        for(i=9;i>=0;i--)
        {
            if(f[i]>0 && flag)
                return i;
            if(f[i]>0)
                flag=1;
        }
        return -1;
    }
};