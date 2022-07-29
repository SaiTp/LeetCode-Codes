class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        map<int,int,greater<int>>mp;
        int ans=0;
        for(auto i:nums)
            mp[i]++;
        int prev=0;
        for(auto i:mp)
        {
            i.second+=prev;
            ans+=i.second;
            prev=i.second;
        }
        return ans-prev;
    }
};