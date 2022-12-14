class Solution {
public:
    int rob(vector<int>& nums) {
        int inc = 0, ex = 0;
	for(auto it : nums){
	// To include current element need to exclude pre element
		int ninc = ex + it;
	// to exlucde current we will take max upto previous
		ex = max(inc, ex), inc = ninc;
	}
	return max(inc, ex);
    }
};