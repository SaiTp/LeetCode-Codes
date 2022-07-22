class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        int i=0,j=0,ans=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<=nums2[j] && i<=j)
            {
                j++;
                ans=max(ans,j-i);
            }
            else if(nums1[i]>nums2[j])
                i++;
            else
                j++;
        }
        return ans==0?0:ans-1;
    }
};