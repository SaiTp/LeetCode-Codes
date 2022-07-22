class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int c1=0;
        for(auto i:nums)
            if(i)
                c1++;
        nums.insert(nums.end(),nums.begin(),nums.end());
        int ans=INT_MAX;
        cout<<c1;
        int t=0;
        for(int i=0;i<c1;i++)
        {
            if(nums[i])
               t++; 
        }
        ans=min(ans,c1-t);
        for(int i=c1;i<nums.size();i++)
        {
            if(nums[i-c1])
                t--;
            if(nums[i])
                t++;
            ans=min(ans,c1-t);
        }
        return ans;
    }
};