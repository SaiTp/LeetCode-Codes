class Solution {
public:
    string generateTheString(int n) {
        string res;
        if(n%2)
            for(int i=0;i<n;i++)
                res+='a';
        else
        {
            for(int i=0;i<n-1;i++)
                res+='a';
            res+='b';
        }
            return res;
    }
};