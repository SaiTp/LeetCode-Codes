class Solution {
public:
    int minSteps(string s, string t) {
        int sfrq[26]={0},tfrq[26]={0};
        int ans=0,i,temp;
        for(i=0;i<s.size();i++)
        {
            sfrq[s[i]-97]++;
        }
        for(i=0;i<t.size();i++)
        {
            tfrq[t[i]-97]++;
        }
        for(i=0;i<26;i++)
        {
            temp=sfrq[i]-tfrq[i];
            if(temp>0)
                ans+=temp;
        }
    return ans;
    }
};