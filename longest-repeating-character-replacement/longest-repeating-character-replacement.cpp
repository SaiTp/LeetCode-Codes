class Solution {
public:
    int characterReplacement(string s, int k) {
     int n=s.size();
        int fre[26]={0};
        int start,end,m=0,count=0;
        start=0;
        for(end=0;end<n;end++)
        {
            fre[s[end]-65]++;
            count=max(count,fre[s[end]-65]);
            while(end-start-count+1>k)
            {
                fre[s[start]-65]--;
                start++;
            }
            m=max(m,end-start+1);
        }
        return m;
    }
};