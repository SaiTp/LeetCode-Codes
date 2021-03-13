class Solution {
public:
    bool isPowerOfFour(int n) {
        return checkPower(n,0);
    }
    bool checkPower(int n,int exp){
        if(pow(4,exp)==n){
            return true;
        }
        if(pow(4,exp)>n){
            return false;
        }
        return checkPower(n,exp+1);
    }
};