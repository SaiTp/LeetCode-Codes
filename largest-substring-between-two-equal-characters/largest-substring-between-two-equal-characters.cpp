class Solution {
    int ans=-1;
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int i,j;
        for(i=0;i<s.size()-1;i++)
        {
            for(j=s.size()-1;j>=i+1;j--)
            {
                if(s[i]==s[j])
                {
                    if(j-i-1>ans)
                        ans=j-i-1;
                    break;
                }
            }
        }
        return ans;
    }
};