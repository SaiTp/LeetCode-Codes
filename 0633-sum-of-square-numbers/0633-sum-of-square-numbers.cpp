class Solution {
public:
    bool issquare(int a)
    {
        return sqrt(a)==floor(sqrt(a));
    }
    bool judgeSquareSum(int c) {
        if(!c)
            return true;
        int i;
        for(i=1;i<=sqrt(c);i++)
        {
            if(issquare(c-i*i))
                return true;
        }
        return false;
    }
};