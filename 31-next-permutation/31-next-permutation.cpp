class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind=-1,n=nums.size();
        for(int i=n-1;i>=1;i--)
        {
            if(nums[i]>nums[i-1])
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
            reverse(nums.begin(),nums.end());
        else
        {
            int mi=ind;
            for(int i=ind+1;i<n;i++)
            {
                if(nums[ind-1]<nums[i] && nums[mi]>=nums[i])
                {
                    mi=i;
                }
            }
            swap(nums[ind-1],nums[mi]);
            reverse(nums.begin()+ind,nums.end());
        }
    }
};