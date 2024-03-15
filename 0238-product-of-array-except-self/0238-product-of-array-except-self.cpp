class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,prod=1,c=1,f=0;
        for(i=0;i<nums.size();i++)
        {
            prod*=nums[i];
            if(nums[i])
            {
                c*=nums[i];
            }
            else
                f++;
        }
        if(!prod)
        {
            for(i=0;i<nums.size();i++) 
                if(nums[i])
                {
                    nums[i]=0;
                }
                else if(f==1)
                {
                    nums[i]=c;
                }
            return nums;
        }
        for(i=0;i<nums.size();i++)
            nums[i]=prod/nums[i];
        return nums;
    }
};