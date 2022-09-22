class Solution {
public:
    string reverseWords(string s) {
        bool space=false;
        string finale;
        string z;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(z.begin(),z.end());
                finale.append(z);
                finale.push_back(' ');
                z.clear();
            }
            else 
            {
                z.push_back(s[i]);
            }
        }
        reverse(z.begin(),z.end());
        finale.append(z);
        return finale;
    }
};