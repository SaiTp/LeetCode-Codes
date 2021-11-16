class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>temp;
        string t;
        stringstream iss(s);
        while(iss>>t)
        {
            if(isdigit(t[0]))
                temp.push_back(stoi(t));
        }
        for(int i=0;i<temp.size()-1;i++)
            if(temp[i]>=temp[i+1])
                return false;
        return true;
    }
};