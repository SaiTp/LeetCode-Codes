class Solution {
public:
    int find(vector<int>& nums1, vector<int>& nums2,int s1,int s2)
    {
        if(nums1.size()*1>nums2.size()*6)
            return -1;
        int i,j,ops;
        i=nums1.size()-1;
        j=0;
        ops=0;
        while(i>=0 || j<nums2.size())
        {
            if(s1<=s2)
                break;
            int c1,c2;
            c1=c2=-1;
            if(i>=0)
                c1=abs(nums1[i]-1);
            if(j<nums2.size())
                c2=abs(nums2[j]-6);
            if(c1>=c2)
            {
                s1=s1-nums1[i]+1;
                i--;
            }
            else if(c2>c1)
            {
                s2=s2-nums2[j]+6;
                j++;
            }
            ops++;
        }
        return ops;
    }
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int s1,s2;
        s1=s2=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(auto i:nums1)
            s1+=i;
        for(auto i:nums2)
            s2+=i;
        if(s1==s2)
            return 0;
        if(s1>s2)
           return find(nums1,nums2,s1,s2);
        return find(nums2,nums1,s2,s1);
    }
};