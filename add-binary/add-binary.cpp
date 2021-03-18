class Solution {
public:
    string addBinary(string a, string b) {
        int x1,x2,n,c=0,i,t;
        string res="";
        x1=a.size();
        x2=b.size();
        if(x1>=x2)
            n=x2;
        else
           n=x1;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(i=0;i<n;i++)
        {
            t=(a[i]-48)+(b[i]-48)+c;
            if(t>1)
            {
                t=t%2;
                c=1;
            }
            else
            {
             c=0;
            }
            res+=t+'0';
        }
        if(i==x1)
        {
            while(i < x2)
            {
            t=(b[i]-48)+c;
            if(t>1)
            {
                t=t%2;
                c=1;
            }
            else
            {
             c=0;
            }
            i++;
            res+=t+'0';
            }
        }
        else
        {
            while(i < x1)
            {
                t=(a[i]-48)+c;
            if(t>1)
            {
                t=t%2;
                c=1;
            }
            else
            {
             c=0;
            }
                i++;
            res+=t+'0';
            }
        }
        if(c==1)
            res+=c+'0';
        reverse(res.begin(),res.end());
        return res;
    }
};