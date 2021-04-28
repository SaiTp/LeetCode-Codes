class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i,s=0,m;
        for(i=0;i<k;i++)
        {
            s+=nums[i];
        }
        m=s;
        for(i=0;i<nums.size()-k;i++)
        {
            s-=nums[i];
            s+=nums[i+k];
            if(m<s)
                m=s;
        }
        return (double)m/(float)k;
    }
};