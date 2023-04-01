class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,mid;
        int n=nums.size()-1;
        while(i<=n)
        {
            mid=(i+n)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                n=mid-1;
                else 
                    i=mid+1;
                    
        }
        return -1;
    }
};