class Solution {
public:
    int maxDepth(string s) {
       int max=0,i,count=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                count++;
            else if(s[i]==')')
            {
                if(count>max)
                    max=count;
                count--;
            }
        }
        return max;
    }
};