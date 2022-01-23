class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,small=INT_MAX;
        for(auto i :prices)
        {
            small=min(small,i);
            ans=max(ans,i-small);
        }
        return ans;
    }
};