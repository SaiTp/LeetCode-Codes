class Solution {
public:
    bool isPalindrome(string s) {
       string t="";
        int i,j,n=s.size();
        for(i=0;i<n;i++)
        {
            if(isalpha(s[i]))
                t+=tolower(s[i]);
            else if(isdigit(s[i]))
                t+=s[i];
        }
        // n=t.size();
        // for(i=0,j=n-1;i<j;i++,j--)
        // {
        //     if(t[i]!=t[j])
        //         return false;
        // }
        string t1 =t;
        reverse(t1.begin(),t1.end());
        
        return t==t1; 
    }
};