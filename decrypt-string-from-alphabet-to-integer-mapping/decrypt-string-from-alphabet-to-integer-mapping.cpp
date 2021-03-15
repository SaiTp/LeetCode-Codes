class Solution {
public:
    string freqAlphabets(string s) {
        int n=s.size();
        n--;
        int t;
        string res;
        while(n>=0)
        {
            if(s[n]=='#')
            {
                n--;
                t=(s[n-1]-48)*10+(s[n]-48);
                n-=2;
                t--;
                res+='a'+t;
            }
            else
            {
                t=(s[n]-48);
                t--;
                res+='a'+t;
                n--;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};