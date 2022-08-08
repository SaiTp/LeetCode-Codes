class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
       int ans = 0; 
        unordered_set<int> seen; 
        for (auto& x : nums) {
            if (seen.count(x-diff) && seen.count(x-2*diff)) ++ans; 
            seen.insert(x); 
        }
        return ans;
    }
};