class Solution {
public:
    int minFlips(int a, int b, int c) {
        if( (a|b) == c)
            return 0;
        int ans=0;
        while( (a|b) !=c)
        {
            // cout<<a<<" "<<b<<" "<<c<<endl;
            if(a%2==0 && b%2==0 && c%2==1)
                ans++;
            else if(a%2==1 && b%2==0 && c%2==0 || a%2==0 && b%2==1 && c%2==0)
                ans++;
            else if(a%2==1 && b%2==1 && c%2==0)
                ans+=2;
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return ans;
    }
};