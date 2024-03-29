class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
         int count = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i] > nums[i+1]) {
                count++;
                if (i != 0 && i != nums.size()-2 && nums[i-1] > nums[i+1] && nums[i] > nums[i+2])
                    return false;
            }
            if (count > 1)
                return false;
        }
        return true;
    }
};