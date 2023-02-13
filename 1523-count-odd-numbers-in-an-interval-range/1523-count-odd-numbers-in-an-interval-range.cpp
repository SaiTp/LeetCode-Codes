class Solution {
public:
    int countOdds(int low, int high) {
        int t=high-low+1;
        int res;
        if(t%2==0)
        {
            res=t/2;
        }
        else
        {
            res=t/2;
            if(high%2 && low%2)
                res++;
        }
        return res;
    }
};