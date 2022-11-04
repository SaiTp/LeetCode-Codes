class Solution {
public:
    bool isvowel(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
       int i,j;
        i=0;
        char c;
        j=s.size()-1;
        while(i<j)
        {
            while(!isvowel(s[i]) && i<j)
                i++;
            while(!isvowel(s[j]) && i<j)
                j--;
            c=s[i];
            s[i]=s[j];
            s[j]=c;
            j--;
            i++;
        }
        return s;
    }
};