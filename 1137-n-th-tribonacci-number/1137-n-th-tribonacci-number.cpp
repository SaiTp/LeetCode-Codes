class Solution {
public:
    int tribonacci(int n) {
  long  int f=0,s=1,t=1;
      long int c=3,fr=0;
        if(n==0)
            return 0;
        else if(n==1||n==2)
            return 1;
        else{
        while(c<=n)
        {
            fr=f+s+t;
            c++;
            f=s;
            s=t;
            t=fr;
        }
        }
        return fr;
    }
};