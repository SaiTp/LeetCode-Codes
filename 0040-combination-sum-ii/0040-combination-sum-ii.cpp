using int2 = pair<int, int>;
class Solution {
public:
int n;
vector<vector<int>> dfs(int i, int target, vector<int2>& nWm, vector<vector<vector<vector<int>>>>& dp) 
{
        if (target == 0) {
            return {{}};
        }

        if (i == n || target < 0) {
            return {};
        }

        if (!dp[i][target].empty()) {
            return dp[i][target];
        }

        auto [x, m] = nWm[i];
        vector<vector<int>> result;
        for (int j = 0; j <= m; j++) {
            vector<vector<int>> combinations = dfs(i + 1, target - j * x, nWm, dp);
            for (int k = 0; k < combinations.size(); k++) {
                for (int l = 1; l <= j; l++) {
                    combinations[k].push_back(x);
                }
                result.push_back(combinations[k]);
            }
        }       
        return  dp[i][target] = result;
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int2> nWm;
        nWm.push_back({candidates[0], 1});
        int idx = 0;
        for (int i = 1; i < candidates.size(); i++) {
            if (candidates[i] == candidates[i - 1]) {
                nWm[idx].second++;
            } else {
                nWm.push_back({candidates[i], 1});
                idx++;
            }
        }
        n=nWm.size();

        vector<vector<vector<vector<int>>>> 
        dp(n, vector<vector<vector<int>>>(target + 1));

        return dfs(0, target, nWm, dp);
    } 
};