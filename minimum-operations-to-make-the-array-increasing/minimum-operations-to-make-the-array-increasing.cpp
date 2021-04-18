class Solution {
public:
    int minOperations(vector<int>& nums) {
        int op=0,i;
        if(nums.size()==1)
            return 0;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i-1]>=nums[i])
            {
                op+=nums[i-1]+1-nums[i];
                nums[i]=nums[i-1]+1;
            }
        }
        return op;
    }
};