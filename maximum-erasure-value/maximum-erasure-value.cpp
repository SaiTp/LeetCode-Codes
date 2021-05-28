class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,bool> um;
        int n = nums.size();
        int start = 0;
        int curr_sum = 0;
        int max_sum = 0;
        for(int i = 0; i < n; i++){
            while(um[nums[i]] == true){
                curr_sum -= nums[start];
                um[nums[start]] = false;
                start++;
            }
            um[nums[i]] = true;
            curr_sum += nums[i];
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};