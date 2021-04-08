class Solution {
public:
    string truncateSentence(string s, int k) {
        istringstream ss(s);
        string t,res;
        while(ss>>t)
        {
            if(k==0)
                break;
            k--;
            res+=t+" ";
        }
        res.erase(res.size()-1);
        return res;
    }
};