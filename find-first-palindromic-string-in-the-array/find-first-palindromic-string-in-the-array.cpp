class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res;
        for(int i=0;i<words.size();i++)
        {
            res=words[i];
            reverse(res.begin(),res.end());
            if(res==words[i])
                return words[i];
        }
        return "";
    }
};