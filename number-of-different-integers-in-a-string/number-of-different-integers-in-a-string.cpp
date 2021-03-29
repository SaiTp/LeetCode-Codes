class Solution {
public:
    int numDifferentIntegers(string word) {
      int i,res=0;
        string t;
        vector<string> out;
        for(i=0;i<word.size();i++)
        {
            t="";
            while(isdigit(word[i]))
            {
                t+=word[i];
                i++;
            }
            if(t!="")
            {
               t.erase(0,t.find_first_not_of('0'));
                out.push_back(t);
            }
        }
    std::sort(out.begin(), out.end());
    out.resize(std::distance(out.begin(), std::unique(out.begin(), out.end())));
        return out.size();
    }
};