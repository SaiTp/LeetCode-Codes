class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
     int t,f,i;
        vector<vector<int>> res;
        for(i=0;i<s.size()-1;i++)
        {
            f=0;
            vector <int> temp;
            t=0;
            while(s[i]==s[i+1] && i<s.size()-1)
            {
                i++;
                t++;
            }
            if(t>=2)
            {
                f=1;
                temp.push_back(i-t);
                temp.push_back(i);
            }
            if(f)
                res.push_back(temp);
        }
        return res;
    }
};