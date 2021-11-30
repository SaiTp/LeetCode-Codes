class Solution {
public:
    int getLucky(string s, int k) {
        string num;
        for(int i=0;i<s.size();i++)
            num+=to_string(s[i]-'a'+1);
       // cout<<num;
        int res=0;
        while(k)
        {
            res=0;
            for(int i=0;i<num.size();i++)
                res+=num[i]-'0';
            k--;
            num=to_string(res);
           // cout<<num<<endl;
        }
        return res;
    }
};