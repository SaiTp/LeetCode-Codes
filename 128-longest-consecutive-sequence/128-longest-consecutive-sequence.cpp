class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),c=1,res=INT_MIN;
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
        if(nums[i]!=nums[i+1]){
            if(nums[i]+1==nums[i+1])
                c++;
            else
            {
                c=1;
            }
            res=max(res,c);
        }
        }
        if(res==INT_MIN)
            return 1;
        return res;
    }
};