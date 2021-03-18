class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int i,j,k;
        string temp;
        vector <string> words;
        for(i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {
                words.push_back(temp);
                temp="";
            }
            else
                temp+=sentence[i];
        }
        words.push_back(temp);
        for(i=0;i<words.size();i++)
        {
            k=0;
            if(searchWord.size()>words[i].size())
                    continue;
            for(j=0;j<searchWord.size();j++)
            {
                if(words[i][k++]!=searchWord[j])
                    break;
            }
            if(j==searchWord.size())
            {
                return i+1;
            }
        }
    return -1;    
    }
};