class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long int>res;
        if(num%3)
            return res;
        long long int a=num/3;
        return {a-1,a,a+1};
    }
};