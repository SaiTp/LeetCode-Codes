class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int i,j,count;
    vector <string> temp;
    vector<string> ip;
        string t;
        for(i=0;i<words.size();i++)
        {
            t="";
            for(j=0;j<words[i].size();j++)
            {
                t+=morse[words[i][j]-97];
            }
            temp.push_back(t);
        }
        return std::set<string>( temp.begin(), temp.end() ).size();
    }
};