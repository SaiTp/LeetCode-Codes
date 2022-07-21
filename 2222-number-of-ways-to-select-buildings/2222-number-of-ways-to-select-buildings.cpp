class Solution {
public:
    long long numberOfWays(string s) {
      long int c0 = 0,c1=0,c01=0,c10 = 0,c010=0,c101=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '0')
            {
                c10 += c1;
                c010 += c01;
                c0++;
            }
            else
            {
                c01 += c0;
                c101 += c10;
                c1++;
            }
        }
        return c010 + c101;  
    }
};