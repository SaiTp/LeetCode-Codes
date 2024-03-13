class Solution {
public:
    int pivotInteger(int n) {
        int sum1=(n*(n+1))/2;
        int sum2=0;
        for(int i=1;i<=n;i++)
        {
            sum2+=i;
            
            if(sum2==sum1)
                return i;
            sum1-=i;
        }
        return -1;
    }
};