class Solution {
public:
    string convertToBase7(int num) {
        int t=num;
        int r;
        string res="";
        if(num==0)
            return "0";
        if(t<0)
            t=-t;
        while(t>0)
        {
            r=t%7;
            res=to_string(r)+res;
            t/=7;
        }
        if(num<0)
            res="-"+res;
        return res;
    }
};