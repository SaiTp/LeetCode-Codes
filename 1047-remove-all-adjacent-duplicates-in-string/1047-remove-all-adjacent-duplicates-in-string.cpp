class Solution {
public:
    string removeDuplicates(string str) {
     string res;
    res.push_back(str[0]);        
    for(int itr = 1; itr < str.size(); itr++){
        if (res.size() && res.back() == str[itr]) res.pop_back();
        else res.push_back(str[itr]);
    }            
    return res;
    }
};