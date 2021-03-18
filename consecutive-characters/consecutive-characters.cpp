class Solution {
public:
    int maxPower(string s) {
        int max=0,i,k,c;
        for(i=0;i<s.size();i++)
        {
            k=0;
            c=0;
          while(s[i]==s[i+k] && i+k<s.size())
          {
              k++;
              c++;
          }
         k--;
         i+=k;
            if(c>max)
                max=c;
        }
        return max;
    }
};