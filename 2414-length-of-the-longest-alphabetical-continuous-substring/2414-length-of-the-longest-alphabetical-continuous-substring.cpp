class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans=1;
        int i=0,j=1,n=s.size();
        while(j<n)
        {
            while(j<n && s[j-1]+1==s[j])
            {
                j++;
            }
            ans=max(ans,j-i);
            i=j;
            j++;
        }
        return ans;
    }
};