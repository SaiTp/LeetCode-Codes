class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t=s+s;
        string n=t.substr(1,t.size()-2);
	    if(n.find(s)!=-1)
	    return true;
	    return false;
    }
};