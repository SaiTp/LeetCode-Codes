class Solution {
public:
    int count(int x)
    {
        int sum=0;
        while(x)
        {
            sum+=x%10;
            x/=10;
        }
        return sum;
    }
    int countEven(int num) {
     int res=0;
        for(int i=2;i<=num;i++)
        {
            if(count(i)%2==0)
                res++;
        }
        return res;
    }
};