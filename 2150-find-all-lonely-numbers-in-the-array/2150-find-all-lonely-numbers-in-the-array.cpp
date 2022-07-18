class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(auto i : nums)
            mp[i]++;
        for(auto i:mp)
        {
            if(i.second==1)
            {
                if(mp.find(i.first-1)==mp.end() && mp.find(i.first+1)==mp.end())
                    res.push_back(i.first);
            }
        }
        return res;
    }
};