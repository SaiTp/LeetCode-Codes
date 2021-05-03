class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
     int m=INT_MAX,t;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                t=abs(i-start);
                if(m>t)
                    m=t;
            }
        }
        return m;
    }
};