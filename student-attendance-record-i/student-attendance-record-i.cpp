class Solution {
public:
    bool checkRecord(string s) {
        int a=0,cl=0,max=0,i,f=0; //a=no.of days absent , cl=no.of consecutive lates
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                a++;
                f=0;
                if(a>1)
                    return false;
            }
            else if(s[i]=='L')
            {
                if(f==1)
                {
                    cl++;
                    if(max<cl)
                        max=cl;
                }
                else
                {
                    cl=1;
                    f=1;
                }
                if(max>2)
                    return false;
            }
            else
                f=0;
        }
        return true;
    }
};