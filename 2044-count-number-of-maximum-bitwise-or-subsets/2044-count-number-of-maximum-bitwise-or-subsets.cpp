class Solution {
public:
    int max,res;
    void func(vector<int> nums,int s,int v)
    {
        if(v==max)
            res++;
        for(int i=s;i<nums.size();i++)
            func(nums,i+1,v|nums[i]);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        for(auto i:nums)
            max|=i;
        func(nums,0,0);
        return res;
    }
};