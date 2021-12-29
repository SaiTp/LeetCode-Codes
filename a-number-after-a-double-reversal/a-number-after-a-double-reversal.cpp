class Solution {
public:
    int reverse(int t)
    {
        int res=0;
        while(t)
        {
            res=(res*10)+(t%10);
            t/=10;
        }
        return res;
    }
    bool isSameAfterReversals(int num) {
        int temp=num;
        temp=reverse(num);
        temp=reverse(temp);
        return temp==num;
    }
};