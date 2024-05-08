class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string>res;
        vector<int>t(score.begin(),score.end());
        sort(t.begin(),t.end());
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[t[n-i-1]]=i+1;
        for(int i=0;i<n;i++)
        {
            int tp=mp[score[i]];
            if(tp==1)
                res.push_back("Gold Medal");
            else if(tp==2)
                res.push_back("Silver Medal");
            else if(tp==3)
                res.push_back("Bronze Medal");
            else
                res.push_back(to_string(tp));
        }
        return res;
    }
};