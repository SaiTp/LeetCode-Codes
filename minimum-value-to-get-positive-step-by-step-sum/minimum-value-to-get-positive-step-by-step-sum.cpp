class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sv=1,i,t=1;
        for(i=0;i<nums.size();i++)
        {
            t=t+nums[i];
            if(t<1)
            {
                sv++;
                i=-1;
                t=sv;
            }
        }
        return sv;
    }
};