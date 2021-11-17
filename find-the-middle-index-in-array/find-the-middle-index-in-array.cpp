class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>presum(nums.size());
        presum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
        presum[i]=presum[i-1]+nums[i];
        }   
        vector<int>postsum(nums.size());
        postsum[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
        postsum[i]=postsum[i+1]+nums[i];
        }  
        for(int i=0;i<nums.size();i++)
        {
         if(postsum[i]==presum[i])
             return i;
        }
        return -1;
    }
};