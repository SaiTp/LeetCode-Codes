class Solution {
public:
    int commonFactors(int a, int b) {
        int i=1,res=0;
        while(a>=i && b>=i)
        {
            if(a%i==0 && b%i==0)
                res++;
            i++;
        }
        return res;
    }
};