class Solution {
public:
    string thousandSeparator(int n) {
    string res="";
        int t;
    while(n>=1000)
       {
           t=n%1000;
            n/=1000;
            if(t<10)
            {
             res=".00"+to_string(t)+res;   
            }
            else if(t<100)
            {
             res=".0"+to_string(t)+res;   
            }
            else
            res="."+to_string(t)+res;
       }
        res=to_string(n)+res;
        
        return res;
    }
};