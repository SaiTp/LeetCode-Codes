class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int l=0,i;
        for(i=0;i<nums.size();i++)
            if(nums[i]!=0)
                nums[l++]=nums[i];
        for(i=l;i<nums.size();i++)
            nums[i]=0;
    }
};