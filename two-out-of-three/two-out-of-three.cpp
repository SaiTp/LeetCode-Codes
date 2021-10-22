class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
     map<int,int>m;
        vector<int>res;
     set<int>a(nums1.begin(),nums1.end());
    set<int>b(nums2.begin(),nums2.end());
        set<int>c(nums3.begin(),nums3.end());
    for(auto i:a)
        m[i]++;
        for(auto i:b)
        m[i]++;
        for(auto i:c)
        m[i]++;
        for(auto t:m)
        {
            if(t.second>1)
                res.push_back(t.first);
        }
        return res;
    }
};