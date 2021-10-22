class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char>s(brokenLetters.begin(),brokenLetters.end());
        int flag=0,res=0;
        for(int i=0;i<text.size();i++)
        {
            if(s.find(text[i])!=s.end())
            {
                while(i<text.size() && text[i]!=' ')
                    i++;
                flag=1;
            }
            if(text[i]==' ')
            {
                if(flag==1)
                {
                    flag=0;
                }
                else
                res++;
            }
        }
        if(flag==0)
            res++;
        return res;
    }
};