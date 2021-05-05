class Solution {
public:
    int jump(vector<int>& nums) {
        int N = nums.size();
        vector<int> jumps(N, INT_MAX);
        jumps[0] = 0;
        for (int i = 0; i < N-1; i++) {
		    // from current position update nums[i] positions with minimum steps
            for (int j = 1; j <= nums[i]; j++) {
			    // steps for pos i+j will be min of curr value and 1 + value of curr pos which is jumps[i]
                if (i + j < N) // to avoid out of bounds of array
                    jumps[i + j] = min(jumps[i + j], jumps[i] + 1);
            }
        }
        return jumps[N-1];
    }
};