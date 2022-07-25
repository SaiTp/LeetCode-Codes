class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,unordered_set<int>>mp1;
        unordered_map<int,int>mp2;
        vector<int>res(k,0);
        for(int i=0;i<logs.size();i++)
        {
            mp1[logs[i][0]].insert(logs[i][1]);
        }
        for(auto i:mp1)
        {
            // cout<<i.first<<" "<<i.second.size();
            mp2[i.second.size()]++;
        }
        // cout<<endl;
        for(auto i:mp2)
        {
            // cout<<i.first<<" "<<i.second;
            res[i.first-1]=i.second;
        }
        return res;
    }
};