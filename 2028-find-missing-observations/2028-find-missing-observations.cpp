class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
       int m = rolls.size();
        int desiredSum = mean*(n + m);
        vector<int> ans(n, 0);
        int currentSum = 0;
        for(auto roll: rolls) {
            currentSum += roll;
        }
        int difference = desiredSum - currentSum;
        if((6*n < difference) || (n > difference)) {
            vector<int> myvector{};
            return myvector;
        }
        difference -= n;
        for(int i = 0; i< n; i++) {
            if(difference > 5) {
                ans[i] = 6;
                difference -= 5;
            } else if(difference > 0) {
                ans[i] = 1 + difference;
                difference = 0;
            } else {
                ans[i] = 1;
            }
        }
        return ans;
    }
};