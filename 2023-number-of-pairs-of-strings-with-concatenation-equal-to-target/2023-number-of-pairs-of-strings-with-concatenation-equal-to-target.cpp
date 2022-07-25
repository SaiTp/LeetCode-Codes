class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n = nums.size();
        unordered_map<int, int> prefix_count;
        for (int index=0; index<n; index++) {
            if (nums[index].size() < target.size() &&
                target.substr(0, nums[index].size()) == nums[index]) {
                prefix_count[nums[index].size()]++;
            }
        }
        
        int count = 0;
        for (int index=0; index<n; index++) {
            if (nums[index].size() < target.size() &&
                target.substr(target.size() - nums[index].size()) == nums[index]) {
                count += prefix_count[target.size() - nums[index].size()];
                if (nums[index].size()*2 == target.size() &&
                    target.substr(0, target.size()/2) == nums[index]) {
                    count--;
                }
            }
        }
        return count;
    }
};