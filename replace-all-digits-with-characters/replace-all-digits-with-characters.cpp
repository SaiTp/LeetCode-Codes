class Solution {
public:
    char shift(char a,int b)
    {
        return (char)(a+b);
    }
    string replaceDigits(string s) {
        for(int i=1;i<s.size();i+=2)
            s[i]=shift(s[i-1],s[i]-'0');
        return s;
    }
};