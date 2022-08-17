class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0)return 1;
      n = min(10, n);
      if(n == 1)return 10;
      int ans = 9;
      int ret = 10;
      for(int i = 2; i<= n; i++){
         ans *= (9 - i + 2);
         ret += ans;
      }
      return ret;
    }
};