class Solution {
public:
    bool isPowerOfThree(int n) {
        long int i=1;
        while(i<=n)
        {
            if(n==i)
                return true;
            i*=3;
        }
        return false;
    }
};