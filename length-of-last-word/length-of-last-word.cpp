class Solution {
public:
    int lengthOfLastWord(string s) {
     int n=s.size();
        int i,res=0;
        while(n>0 && s[n-1]==' ')
            n--;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
                break;
            res++;
        }
        return res;
    }
};