class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int res=n-count(nums.begin(),nums.end(),*max_element(nums.begin(),nums.end()))-count(nums.begin(),nums.end(),*min_element(nums.begin(),nums.end()));
        if(res<0)
            return 0;
        return res;
    }
};