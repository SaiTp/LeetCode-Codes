class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int sum = accumulate(begin(cp), end(cp), 0), subArrSum = accumulate(begin(cp), end(cp) - k, 0), ans = sum - subArrSum;
	for(int r = size(cp) - k, l = 0; r < size(cp); r++, l++)
		ans = max(ans, sum - (subArrSum += cp[r] - cp[l]));
	return ans;
    }
};