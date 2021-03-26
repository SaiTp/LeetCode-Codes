class Solution {
public:
    string customSortString(string S, string T) {
        int freq[26]={0};
        int i;
        string res;
        for(i=0;i<T.size();i++)
        {
            freq[T[i]-97]++;
        }
        for(i=0;i<S.size();i++)
        {
            while(freq[S[i]-97]>0)
            {
               res+=S[i]; 
               freq[S[i]-97]--;
            }
        }
        for(i=0;i<26;i++)
        {
            while(freq[i]>0)
            {
               res+=i+'a'; 
               freq[i]--;
            }
        }
        return res;
    }
};