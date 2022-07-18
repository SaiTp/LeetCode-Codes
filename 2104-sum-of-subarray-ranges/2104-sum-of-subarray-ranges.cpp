class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long int ans=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            int mx,mn;
            mx=mn=nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]>mx)
                    mx=nums[j];
                else if(nums[j]<mn)
                    mn=nums[j];
                ans+=mx-mn;
            }
        }
        return ans;
    }
};