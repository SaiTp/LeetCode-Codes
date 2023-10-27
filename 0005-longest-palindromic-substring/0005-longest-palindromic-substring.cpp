class Solution {
public:
    string longestPalindrome(string s) {
       int n=s.size();
        string res;
        res+=s[0];
        int l=0;
        for(int i=0;i<n;i++) //odd length
        {
            int i1=i-1;
            int i2=i+1;
            while(i1>=0 && i2<n)
            {
                if(s[i1]==s[i2])
                {
                    int len=i2-i1+1;
                    if(l<len)
                    {
                        l=len;
                        res=s.substr(i1,len);
                    }
                     i1--;
                    i2++;
                }
                    else
                        break;     
            }
        }
        for(int i=0;i<n;i++) //even length
        {
            int i1=i;
            int i2=i+1;
            while(i1>=0 && i2<n)
            {
                if(s[i1]==s[i2])
                {
                    int len=i2-i1+1;
                    if(l<len)
                    {
                        l=len;
                        res=s.substr(i1,len);
                    }
                     i1--;
                    i2++;
                }
                    else
                        break;     
            }
        }
        return res;
    }
};