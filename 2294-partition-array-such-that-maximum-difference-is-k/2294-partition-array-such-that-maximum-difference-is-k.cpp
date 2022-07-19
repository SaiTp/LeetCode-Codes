class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int t,ans=0;
        for(int i=0;i<n;i++)
        {
            t=i+1;
            while(t<n && nums[t]-nums[i]<=k)
            {
                t++;
            }
            i=t-1;
            ans++;
        }
        return ans;
    }
};