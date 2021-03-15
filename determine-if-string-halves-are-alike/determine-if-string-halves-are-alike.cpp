class Solution {
public:
    bool isvowel(char ch)
    {
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' )
            return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int n=s.size();
        int fh=0,sh=0;
        int i;
        for(i=0;i<n/2;i++)
        {
            if(isvowel(s[i]))
                fh++;
        }
        for(i=n/2;i<n;i++)
        {
            if(isvowel(s[i]))
                sh++;
        }
        if(fh==sh)
            return true;
        return false;
    }
};