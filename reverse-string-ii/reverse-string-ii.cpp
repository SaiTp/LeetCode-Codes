class Solution {
public:
    string reverseStr(string s, int k) {
     int start;
     char c;
        for(start=0;start<s.size();start+=2*k)
        {
            int i=start;
            int j=start+k-1>s.size()-1?s.size()-1:start+k-1;
            while(i<j)
            {
                c=s[i];
                s[i++]=s[j];
                s[j--]=c;
            }
        }
        return s;
    }
};