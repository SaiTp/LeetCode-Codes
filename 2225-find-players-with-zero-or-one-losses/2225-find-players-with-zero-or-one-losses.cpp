class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp;
        vector<int>one,two;
        for(auto i:matches)
        {
            mp[i[0]];
            mp[i[1]]++;
        }
        for(auto i:mp)
        {
            if(i.second==0)
                one.push_back(i.first);
            else if(i.second==1)
                two.push_back(i.first);
        }
        sort(one.begin(),one.end());
        sort(two.begin(),two.end());
        return {one,two};
    }
};