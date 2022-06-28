class Solution {
public:
    string removeDigit(string number, char digit) {
        string t;
        string mx="0";
        for(int i=0;i<number.size();i++)
        {
            if(number[i]==digit)
            {
              t=number.substr(0,i)+number.substr(i+1);
                if(mx<t)
                    mx=t;
            }  
        }
        return mx;
    }
};