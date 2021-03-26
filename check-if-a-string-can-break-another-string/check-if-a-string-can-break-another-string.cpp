class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int i=0,n=s1.size();
        while(s1[i]==s2[i])
            i++;
        if(s1[i]>s2[i])
        {
            for(;i<n;i++)
            {
                if(s1[i]<s2[i])
                    return false;
            }
        }
        else
        {
            for(;i<n;i++)
            {
                if(s2[i]<s1[i])
                    return false;
            }
        }
        return true;
    }
};