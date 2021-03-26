class Solution {
public:
    int numSub(string s) {
        long i,c=0,n=s.size(),res=0;
        for(i=0;i<n;i++)
        {
            c=0;
            if(s[i]=='1')
            while(i<n && s[i]=='1')
            {
                i++;
                c++;
            }
            res+=(c*(c+1))/2; 
        }
        return res%1000000007;
    }
};