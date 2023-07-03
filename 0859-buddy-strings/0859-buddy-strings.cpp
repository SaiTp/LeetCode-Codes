class Solution {
public:
    bool buddyStrings(string a, string b) {
        int n1,n2,i,j,c=0,f=0;
        vector<int> t;
        n1=a.size();
        n2=b.size();
        for(i=0;i<n1-1;i++)
        {
        for(j=i+1;j<n1;j++)
            if(a[i]==a[j])
            {
                f=1;
                break;
            }
            if(f)
                break;
        }
        if(n1!=n2)
            return false;
        for(i=0,j=0;i<n1;i++,j++)
        {
            if(a[i]!=b[i])
            {
                c++;
                t.push_back(i);
            }
        }
        if(c>2)
            return false;
        if(c==0 && f)
            return true;
        if(c<2)
            return false;
        return a[t[0]]==b[t[1]] && a[t[1]]==b[t[0]];
    }
};