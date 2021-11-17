class Solution {
public:
    int minTimeToType(string word) {
        int n=word.size();
        int res=n;
        char cur='a';
        for(int i=0;i<n;i++)
        {
            res+=min(abs(26+word[i]-cur)%26,abs(26+cur-word[i])%26);
            cur=word[i];
        }
        return res;
    }
};