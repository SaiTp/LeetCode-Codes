class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
         bool flag = false;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i-1] >= nums[i]) {
            if (flag) return false;
            flag = true;
            
            if (i > 1 && nums[i-2] >= nums[i])
                nums[i] = nums[i-1];
        }
    }
    return true;
    }
};