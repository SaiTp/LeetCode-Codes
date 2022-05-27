class Solution {
public:
    int numberOfSteps (int num) {
        int c=0;
        while(num>0)
        {
            if(num%2)
                num--;
            else
                num/=2;
            c++;
        }
        return c;
    }
};