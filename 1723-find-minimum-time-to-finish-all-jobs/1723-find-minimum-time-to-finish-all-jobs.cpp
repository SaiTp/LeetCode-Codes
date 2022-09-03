class Solution {
public:
   static bool comp(int &a, int &b)
    {
        return a > b;
    }
    int ans = INT_MAX;
    void dfs(vector<int> &vis, int idx, vector<int> &jobs, int k)
    {
        if(idx == jobs.size())
        {
            int val = 0;
            for(int i = 0; i < k; i++)
            {
                val = max(val, vis[i]);
            }
            ans = min(ans,val);
            return;
        }
        for(int i = 0; i < k; i++)
        {
            if(i > 0 && vis[i] >= vis[i - 1])
                continue;
            if(vis[i]+jobs[idx] >= ans)
                continue;
            vis[i] += jobs[idx];
            dfs(vis, idx+1, jobs, k);
            vis[i] -= jobs[idx];
        }
        return;
    }
public:
    int minimumTimeRequired(vector<int>& jobs, int k) {
        sort(jobs.begin(), jobs.end(), comp);
        vector<int> vis(k+1,0);
        dfs(vis, 0, jobs, k);
        return ans;
    }
};