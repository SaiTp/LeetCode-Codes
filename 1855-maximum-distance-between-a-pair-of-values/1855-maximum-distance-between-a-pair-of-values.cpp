class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
       int i=nums1.size()-1, j=nums2.size()-1;
        int ans=0;
        while(i>=0 && j>=0)
        {
            if(nums2[j]<nums1[i])
            {
                j--;
            }
            else if(j>=i && nums2[j]>=nums1[i] )
            {
                ans=max(j-i,ans);
                i--;
            }
            else
            {
                i--;
            }
        }
        return ans;
    }
};