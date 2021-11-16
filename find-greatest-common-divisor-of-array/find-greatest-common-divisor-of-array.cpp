class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn,mx;
        mn=nums[0];
        mx=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>mx)
                mx=nums[i];
            else if(nums[i]<mn)
                mn=nums[i];
        }
        for(int i=mn;i>=1;i--)
            if(mx%i==0 && mn%i==0)
                return i;
        return 1;
    }
};