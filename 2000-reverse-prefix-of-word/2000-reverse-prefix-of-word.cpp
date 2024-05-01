class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos=0;
        for(int i=0;i<word.size();i++)
            if(word[i]==ch)
            {
                pos=i;
                break;
            }
        int i=0;
        while(i<pos)
        {
            swap(word[i],word[pos]);
            pos--;
            i++;
        }
        return word;
    }
};