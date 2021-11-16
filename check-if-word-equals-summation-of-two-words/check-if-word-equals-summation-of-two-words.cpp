class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int fc=0,sc=0,tc=0;
        for(int i=0;i<firstWord.size();i++)
            fc=fc*10+(firstWord[i]-'a');
        for(int i=0;i<secondWord.size();i++)
            sc=sc*10+(secondWord[i]-'a');
        for(int i=0;i<targetWord.size();i++)
            tc=tc*10+(targetWord[i]-'a');
        return sc+fc==tc;
    }
};