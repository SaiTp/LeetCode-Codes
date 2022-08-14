class Solution {
public:
   unordered_map<int, int> map;

	int countSpecialNumbers(int n) {
		if(n <= 10)
			return n;

		string str = to_string(n);
		return countSpecialNumbers(str, 0) + v(str.size() - 1);
	}

	int countDigits(char start, char end) {
		int count = 0;
		for(char c = start; c <= end; c++)
			count += !map[c];
		return count;
	}

	int comb(int n, int k) {
		int ans = 1;
		for(int i = 0; i < k; i++) {
			ans *= (n - i);
		}
		return ans;
	}

	int v(int n) {
		if(n == 1)
			return 9;
		return 9 * comb(9, n - 1) + v(n - 1);
	}

	int countSpecialNumbers(string& str, int index) {

		if(index == str.size() - 1)
			return countDigits('0', str[index]);

		int res = 0, countLess = 0;

		if(index == 0)
			countLess = countDigits('1', str[index] - 1);
		else 
			countLess = countDigits('0', str[index] - 1);

		int leftover = countDigits('0', '9') - 1;

		res += comb(leftover, str.size() - index - 1) * countLess;
		if(map[str[index]])
			return res;
		map[str[index]] = true;
		res += countSpecialNumbers(str, index + 1);
		return res;
	}
};