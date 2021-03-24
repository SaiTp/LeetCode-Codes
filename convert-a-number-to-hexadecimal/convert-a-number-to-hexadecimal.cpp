class Solution {
public:
    string toHex(int num) {
    string ans, t = "0123456789abcdef";
    unsigned int n = num;
    do{
      ans= t[n%16]+ans;
      n /= 16;
      }while(n);
    return ans;
    }
};