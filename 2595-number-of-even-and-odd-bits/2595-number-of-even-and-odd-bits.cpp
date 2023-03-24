class Solution {
public:
    vector<int> evenOddBit(int n) {
        int f=1,e=0,o=0;
        while(n)
        {
            if(f && n&1)
                e++;
            if(!f && n&1)
                o++;
            f^=1;
            n>>=1;
        }
        return {e,o};
    }
};