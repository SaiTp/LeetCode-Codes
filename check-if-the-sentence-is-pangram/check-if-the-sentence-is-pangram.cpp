class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[26]={0};
        for(int i=0;i<sentence.size();i++)
        {
            freq[sentence[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]==0)
                return false;
        }
        return true;
    }
};