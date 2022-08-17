class Solution {
public:
   int find(int n){
        if(n==0)return 1;
        int ans=9;
        int x=9;
        for(int i=1;i<n;i++){
            ans*=x;
            x--;
        }
        return ans;
    }
    int countNumbersWithUniqueDigits(int n) {
       int ans=0;
        for(int i=0;i<=n;i++){
            ans+=find(i);
        }
        return ans;
    }
};