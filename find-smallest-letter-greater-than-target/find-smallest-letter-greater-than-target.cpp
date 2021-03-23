class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i;
        for(i=0;i<letters.size();i++)
        {
            if(target<letters[i])
                break;
        }
        if(i<letters.size())
        return letters[i];
        return letters[0];
    }
};