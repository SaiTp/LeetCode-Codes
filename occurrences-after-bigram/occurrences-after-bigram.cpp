class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
     string t="";
        int i;
        vector<string> temp;
        vector<string> res;
        for(i=0;i<text.size();i++)
        {
            if(text[i]==' ')
            {
                temp.push_back(t);
                t="";
            }
            else
                t+=text[i];
        }
         temp.push_back(t);
        for(i=0;i<temp.size()-2;i++)
        {
            if(temp[i]==first && temp[i+1]==second)
                res.push_back(temp[i+2]);
        }
        return res;
    }
};