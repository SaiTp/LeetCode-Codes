class Solution {
public:
    int longestPalindrome(string s) {
        int freq[52]={0};
        int i,res=0,f=0;
        for(i=0;i<s.size();i++)
        {
            if(islower(s[i]))
                freq[s[i]-97]++;
            else
                freq[s[i]-39]++;
        }
        for(i=0;i<52;i++)
        {
            if(freq[i]%2==0)
                res+=freq[i];
            else 
            {
                f=1;
                res+=freq[i]-1;
            }
        }
        if(f)
            res++;
        return res;
    }
};