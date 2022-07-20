class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mp;
        int j=0;
        for(auto i:nums)
            mp[i]=j++;
        for(auto i:operations)
        {
            int t=mp[i[0]];
            nums[t]=i[1];
            mp[i[1]]=t;
        }
        return nums;
    }
};