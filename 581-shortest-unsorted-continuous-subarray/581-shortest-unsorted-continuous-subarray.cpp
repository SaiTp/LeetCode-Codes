class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>t(nums);
        sort(nums.begin(),nums.end());
        int f=-1,s=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(f==-1 && t[i]!=nums[i])
            {
                f=i;
            }
            else if(t[i]!=nums[i])
                s=i;
        }
        if(f==-1)
            return 0;
        return s-f+1;
    }
};