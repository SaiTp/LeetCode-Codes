class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    long long previousElementsSum = 0;
    long long ans = -1;
    for (int i = 0; i < nums.size(); i++) {
        if (i >= 2 && nums[i] < previousElementsSum) {
            ans = nums[i] + previousElementsSum;
        }
        previousElementsSum += nums[i];
    }
    return ans; 
    }
};