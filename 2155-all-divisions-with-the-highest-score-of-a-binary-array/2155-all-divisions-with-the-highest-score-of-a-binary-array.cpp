class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int sum=0,mx,ans,n=nums.size(),sum2=0;
        unordered_map<int,vector<int>>mp;
        for(auto i:nums)
            sum+=i;
        mx=sum;
        ans=0;
        mp[mx].push_back(0);
        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i]==0)
                sum2++;
            else
                sum--;
            if(sum+sum2>=mx)
            {
                mx=sum+sum2;
                mp[mx].push_back(i+1);
                ans=i;
            }
        }
        return mp[mx];
    }
};