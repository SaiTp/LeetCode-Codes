class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        vector<int>res;
        for(auto i:mp)
            if(i.second>nums.size()/3)
                res.push_back(i.first);
        return res;
    }
};