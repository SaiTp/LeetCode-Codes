class Solution {
public:
    vector<int> tmp(vector<int>v,int p)
    {
        int t,sp,ep;
        sp=ep=p;
        t=v[p];
        while(ep<v.size() && v[ep]==t)
            ep++;
        while(sp>=0 && v[sp]==t)
            sp--;
        return {sp+1,ep-1};
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(nums[mid]==target)
                return tmp(nums,mid);
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        return {-1,-1};
    }
};