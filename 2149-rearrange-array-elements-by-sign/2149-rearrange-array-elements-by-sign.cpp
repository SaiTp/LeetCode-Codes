class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int pp=0,np=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                res[pp]=nums[i];
                pp+=2;
            }
            else
            {
                res[np]=nums[i];
                np+=2;
            }
        }
        return res;
    }
};