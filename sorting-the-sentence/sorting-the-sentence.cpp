class Solution {
public:
    string sortSentence(string s) {
        map<int,string>m;
        string word,res;
        stringstream iss(s);
        while (iss >> word)
        m[word[word.size()-1]-'0']=word.substr(0,word.size()-1);
        for(auto i:m)
            res+=i.second+" ";
            
        return res.erase(res.size()-1);
    }
    
};