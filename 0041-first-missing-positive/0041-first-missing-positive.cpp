class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int i;
        for(i=1;i<=nums.size();i++)
            if(s.find(i)==s.end())
                return i;
        return i;
    }
};