class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
         vector<bool> vis(k+1);
        int cnt=0;
        int ans=1;
        for (int i : rolls) {
            if (!vis[i]) {
                vis[i]=1;
                ++cnt;
                if (cnt==k) {
                    vis=vector<bool>(k+1);
                    ++ans;
                    cnt=0;
                }
            }
        }
        return ans;
    }
};