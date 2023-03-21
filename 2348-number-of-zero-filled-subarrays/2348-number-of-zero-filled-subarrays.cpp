class Solution {
public:
    long long formula(long long int n)
    {
        return (n*(n+1))/2;
    }
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int n=nums.size();
        long long ans=0;
        if(n==1 && nums[0]==0)
            return 1;
        long long int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                c++;
            }
            else
            {
                ans+=formula(c);
                c=0;
            }
        }
        ans+=formula(c);
        return ans;
    }
};