class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
     unordered_map<int, set<int>> m;
        for (const auto& log : logs) {
            const int id = log[0];
            const int time = log[1];
            m[id].insert(time);
        }
        vector<int> ans(k);
        for (const auto& [id, time_set] : m) {
            ++ans[size(time_set) - 1];
        }
        return ans;
    }
};