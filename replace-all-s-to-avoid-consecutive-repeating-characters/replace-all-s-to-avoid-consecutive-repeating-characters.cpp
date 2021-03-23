class Solution {
public:
    string modifyString(string s) {
    s = '_' + s + '_';
	string res = "";
	char c;
	for (int i = 1; i < s.length() - 1; i++) {
		if (s[i] == '?') {
			 c = 'a';
			while (c == res.back() || c == s[i + 1])
				 c++;
			res += c;
		} else {
			res += s[i];
		}
	}
	return res;
    }
};