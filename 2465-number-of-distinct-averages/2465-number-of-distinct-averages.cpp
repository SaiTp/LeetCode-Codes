class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double>st;
        sort(nums.begin(),nums.end());
        for(int i=0,j=nums.size()-1;i<j;i++,j--)
            st.insert(((double)nums[i]+nums[j])/2.0);
        return st.size();
    }
};