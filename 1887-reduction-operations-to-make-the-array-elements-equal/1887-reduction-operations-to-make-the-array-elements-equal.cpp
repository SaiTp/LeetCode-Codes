class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int cnt[50010];
        memset(cnt, 0, sizeof cnt);
        for(auto x : nums)
        {
            cnt[x] ++;
        }
        int res = 0;
        
        int c = 0;
        for(int i = 1; i <= 50000; ++ i)
        {
            if(cnt[i])
            {
                res += c * cnt[i];
                c ++;
            }
        }
        return res;
    }
};