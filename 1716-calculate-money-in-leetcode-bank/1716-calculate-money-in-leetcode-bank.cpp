class Solution {
public:
    int totalMoney(int n) {
        int sum=0,i,c=1,d=1;
        for(i=0;i<n;i++)
        {
            if(i%7==0)
                c=d++;
            sum+=c++;
        }
        return sum;
    }
};