class Solution {
public:
    long long int makeint(string t)
    {
        long long int temp=0;
        for(int i=0;i<t.size();i++)
        {
            temp=temp*10+(t[i]-'0');
        }
        return temp;
    }
    long long smallestNumber(long long num) {
        int f=1;
        if(num<0)
        {
            f=0;
            num=-num;
        }
        string t=to_string(num);
        if(!f)
        {
            sort(t.begin(),t.end(),greater<char>());
            cout<<t;
        }
        else
        {
             sort(t.begin(),t.end());
             if(t[0]=='0')
             for(int i=1;i<t.size();i++)
             {
                 if(t[i]!='0')
                 {
                     swap(t[0],t[i]);
                     break;
                 }
             }
        }
        long long int ans=makeint(t);
        if(!f)
            return -ans;
        return ans;
    }
};