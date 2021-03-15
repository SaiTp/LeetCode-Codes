class Solution {
public:
    string sortString(string s) {
        int freq[26]={0};
        int i,f;
        string res;
        for(i=0;i<s.size();i++)
        {
            freq[s[i]-97]++;
        }
        while(1)
        {
            f=0;
            for(i=0;i<26;i++)
            {
                if(freq[i]!=0)
                {
                    res+='a'+i;
                    freq[i]--;
                    f=1;
                }
            }
            for(i=25;i>=0;i--)
            {
                if(freq[i]!=0)
                {
                    res+='a'+i;
                    freq[i]--;
                    f=1;
                }
            }
            if(f==0)
                break;
        }
        return res;
    }
};