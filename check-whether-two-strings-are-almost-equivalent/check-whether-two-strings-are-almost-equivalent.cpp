class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int f1[26],f2[26];
        for(int i=0;i<26;i++)
        { f1[i]=0;
         f2[i]=0;
        }
        for(int i=0;i<word1.size();i++)
        {
            f1[word1[i]-'a']++;
            f2[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++)
            if(abs(f1[i]-f2[i])>3)
                return false;
        return true;
    }
};