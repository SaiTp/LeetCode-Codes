class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i=0;i<words.size()-1;i++)
        {
            string t=words[i];
            sort(t.begin(),t.end());
            for(int j=i+1;j<words.size();j++)
            {
                string f=words[j];
                sort(f.begin(),f.end());
                if(f==t)
                {
                    words.erase(words.begin()+j);
                    j--;
                }
                else
                    break;
            }
        }
        return words;
    }
};