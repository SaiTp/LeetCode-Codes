class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        while(n>0)
        {
            if(n%2&&n!=1)
            return false;
            n/=2;
        }
        return true;
    }
};