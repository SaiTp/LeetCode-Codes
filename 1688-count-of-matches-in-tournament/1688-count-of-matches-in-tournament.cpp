class Solution {
public:
    int numberOfMatches(int n) {
        int res=0,q;
        while(n!=1)
        {
            q=n/2;
            n-=n/2;
            res+=q;
        }
        return res;
    }
};