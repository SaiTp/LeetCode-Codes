class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size()-1;i++)
        {
            int t=nums[i]+nums[i+1];
            if(st.find(t)==st.end())
                st.insert(t);
            else
                return true;
        }
        return false;
    }
};