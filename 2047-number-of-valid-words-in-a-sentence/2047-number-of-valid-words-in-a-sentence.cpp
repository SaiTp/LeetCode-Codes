class Solution {
public:
    int countValidWords(string s) {
        stringstream ss(s);
        string t;
        int res=0;
        while(ss>>t)
        {
            int pn=0,hyp=0,f=0;
            
                for(int i=0;i<t.size();i++)
                {
                    if(t[i]=='-')
                    {
                        hyp++;
                        if(hyp>1)
                        {
                            f=1;
                            break;
                        }
                        if(i==0 || i==t.size()-1)
                        {
                            f=1;
                            break;
                        }
                        if(t[i-1]=='!' || t[i-1]==',' || t[i-1]=='.' || t[i+1]=='!' || t[i+1]==',' || t[i+1]=='.')
                            {
                            f=1;
                            break;
                        }
                    }
                    else if(t[i]=='!' || t[i]==',' || t[i]=='.' )
                    {
                        pn++;
                        if(pn>1)
                        {
                            f=1;
                            break;
                        }
                        if(i!=t.size()-1)
                        {
                            f=1;
                            break;
                        }
                    } 
                    else if(t[i]-'0' >=0 && t[i]-'0' <=9)
                    {
                        f=1;
                        break;
                    }
                }
            if(!f)
            {
                cout<<t<<endl;
                res++;
            }
        }
        return res;
    }
};