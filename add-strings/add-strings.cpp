class Solution {
public:
    string addStrings(string num1, string num2) {
        int x1,x2,n,c=0,i,t;
        string res="";
        x1=num1.size();
        x2=num2.size();
        if(x1>=x2)
            n=x2;
        else
           n=x1;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        for(i=0;i<n;i++)
        {
            t=(num1[i]-48)+(num2[i]-48)+c;
            if(t>9)
            {
                t=t%10;
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
            t=(num2[i]-48)+c;
            if(t>9)
            {
                t=t%10;
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
                t=(num1[i]-48)+c;
            if(t>9)
            {
                t=t%10;
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