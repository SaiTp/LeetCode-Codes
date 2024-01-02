class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        int mx=0;
        for(auto i:nums)
        {
            mp[i]++;
            if(mx<mp[i])
                mx=mp[i];
        }
        vector<vector<int>>ans(mx);
        for(auto i:mp)
        {
            while(i.second--)
                ans[i.second].push_back(i.first);
        }
        return ans;
    }
};