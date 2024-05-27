class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
                if(nums[j]>=i)
                    c++;
            if(i==c)
                return i;
        }
        return -1;
    }
};