class Solution {
public:
    string convertToTitle(int n) {
         string str;
        while (n) {
            str += (--n % 26 + 'A');
            n /= 26;
        }
        return {str.rbegin(), str.rend()};
    }
};