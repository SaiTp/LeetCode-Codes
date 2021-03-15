class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int i=0,j=0,n1,n2;
        n1=word1.size();
        n2=word2.size();
        while(1)
        {
            if(i==n1 || j==n2)
                break;
            res+=word1[i++];
            res+=word2[j++];
        }
        while(i<n1)
        {
            res+=word1[i++];
        }
        while(j<n2)
        {
            res+=word2[j++];
        }
        return res;
    }
};