class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0],m=nums[0],i;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
            {
                sum+=nums[i];
            }
            else
                sum=nums[i];
            m=max(m,sum);
        }
        return m;
    }
};