class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i;
        string s1,s2;
        for(i=0;i<word1.size();i++)
            s1+=word1[i];
        for(i=0;i<word2.size();i++)
            s2+=word2[i];
        int n1,n2;
        n1=s1.size();
        n2=s2.size();
        if(n1!=n2)
            return false;
        for(i=0;i<n1;i++)
        {
            if(s1[i]!=s2[i])
                return false;
        }
        return true;
    }
};