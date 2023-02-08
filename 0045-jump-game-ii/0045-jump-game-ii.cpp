class Solution {
public:
    int jump(vector<int>& nums) {
        int minReqJump = 0, mxLenForCurJump = 1, mxLenForNxtJump = 1;
	for (int i = 0; i < nums.size()-1; ++i) {
		mxLenForCurJump--;
		mxLenForNxtJump = max(mxLenForNxtJump-1, nums[i]);
		if (mxLenForCurJump == 0) {
			mxLenForCurJump = mxLenForNxtJump;
			minReqJump++;
		}
	}
	return minReqJump;
    }
};