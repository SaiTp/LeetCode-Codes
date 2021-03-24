class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0, min=INT_MAX;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i];
            if(min>nums[i])
            min=nums[i];
        }
        return sum-min*nums.size();
    }
};