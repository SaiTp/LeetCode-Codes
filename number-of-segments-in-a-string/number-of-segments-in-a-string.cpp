class Solution {
public:
    int countSegments(string s) {
        int res=1;
        int n=s.size(),i=0;
        while(n>0 && s[n-1]==' ')
            n--;
        while(i<n && s[i]==' ')
            i++;
        if(n==0)
            return 0;
        for(;i<n;i++)
        {
            if(s[i]==' ')
            {
                while(s[i+1]==' ' && i<n)
                    i++;
                res++;
            }
        }
        return res;
    }
};