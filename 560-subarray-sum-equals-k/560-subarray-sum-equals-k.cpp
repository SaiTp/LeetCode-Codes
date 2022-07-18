class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=1;i<n;i++)
            nums[i]+=nums[i-1];
        unordered_map<int,int>mp;
        mp[0]++;
        int sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i]-(i>0?nums[i-1]:0);
            ans+=mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};