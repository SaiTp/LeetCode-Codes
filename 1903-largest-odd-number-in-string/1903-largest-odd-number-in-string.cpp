class Solution {
public:
    string largestOddNumber(string num) {
        string res="";
        int i;
        for(i=num.size()-1;i>=0;i--)
            if((num[i]-'0')%2==1)
            {
                break;
            }
        for(int j=0;j<=i;j++)
            res+=num[j];
        return res;
    }
};