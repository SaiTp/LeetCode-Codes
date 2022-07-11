class Solution {
public:
    int rangeBitwiseAnd(int n, int m) {
    int c=0;
        while(n!=m)
        {
            n>>=1;
            m>>=1;
            c++;
        }
        return m<<c;
    }
};