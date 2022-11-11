class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <2)
        return nums.size();
    
    int i = 1, curval=nums[0];
    while(i<nums.size())
    {
        if(curval == nums[i])
        {
            nums.erase(nums.begin()+i);
        }
        else
        {
            curval = nums[i];
            i++;
        }
    }
    return nums.size();
    }
};