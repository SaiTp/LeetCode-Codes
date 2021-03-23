class Solution {
public:
    bool checkPowersOfThree(int n) {
        string str;
        int i;
        while(n>0)
        {
            str+=(n%3)+'0';
            n/=3;
        }
        for(i=0;i<str.size();i++)
            if(str[i]=='2')
                return false;
        return true;
    }
};