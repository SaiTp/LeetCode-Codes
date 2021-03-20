class Solution {
public:
    string reformat(string s) {
        int dig=0,ch=0;
        int i,t;
        string res,temp1,temp2;
        for(i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                temp1+=s[i];
                dig++;
            }
            else
            { 
                temp2+=s[i];
                ch++;
            }
        }
        t=dig-ch;
        if(t>1 || t<-1)
            return "";
        if(temp1.size()==temp2.size())
        {
            i=0;
            t=0;
            while(i<temp1.size() && t<temp2.size())
            {
                res+=temp2[t++];
                res+=temp1[i++];
            }
        }
        else if(temp1.size()>temp2.size())
        {
            res+=temp1[0];
            i=1;
            t=0;
            while(i<temp1.size() && t<temp2.size())
            {
                res+=temp2[t++];
                res+=temp1[i++];
            }
            
        }
        else
        {
            res+=temp2[0];
            i=0;
            t=1;
            while(i<temp1.size() && t<temp2.size())
            {
                res+=temp1[i++];
                res+=temp2[t++];
            }
            
        }
        return res;
    }
};