class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<nums1.size();i++)
            mp1[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
            mp2[nums2[i]]++;
        for(int i=0;i<nums1.size();i++)
            mp2[nums1[i]]=0;
        for(int i=0;i<nums2.size();i++)
            mp1[nums2[i]]=0;
        vector<int>f,s;
        for(auto i:mp1)
            if(i.second>0)
                f.push_back(i.first);
        for(auto i:mp2)
            if(i.second>0)
                s.push_back(i.first);
        vector<vector<int>>res;
        res.push_back(f);
        res.push_back(s);
        return res;
                
    }
};