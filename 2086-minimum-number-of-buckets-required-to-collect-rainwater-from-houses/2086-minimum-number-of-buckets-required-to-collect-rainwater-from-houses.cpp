class Solution {
public:
    int minimumBuckets(string s) {
         int c=0;
        for(int i=0;i<s.size();i++)
        {           
            if(s[i]=='H')
            {
                if(i-1>=0&&s[i-1]=='B')
                    continue;
                if(i+1<s.size()&&s[i+1]=='.')
                    s[i+1]='B';
                else if(i-1>=0&&s[i-1]=='.')
                    s[i-1]='B';
                else
                    return -1; 
            }
        }
        
        
        for(auto x:s)
            if(x=='B')
                c++;
        return c;
    }
};