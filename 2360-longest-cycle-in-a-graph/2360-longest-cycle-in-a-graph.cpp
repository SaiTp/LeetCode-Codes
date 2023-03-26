class Solution {
public:
   
    
    int longestCycle(vector<int>& edges) {
       int n = edges.size();
        vector<bool> visited(n, false);
        
        int ans = -1;
        
        for (int i = 0 ; i < n ; ++i) {
            if (visited[i])
                continue ;
            
            int cur = i;
            unordered_map<int,int> mp;
            mp[cur] = 0;
            visited[cur] = true;
            int cnt = 0;
            while (cur != -1) {
                ++cnt;
                cur = edges[cur];
                if (cur == -1)
                    break ;
                if (mp.find(cur) != mp.end()) {
                    ans = max(ans, cnt - mp[cur]);
                    break ;
                }
                if (visited[cur])
                    break ;
                visited[cur] = true;
                mp[cur] = cnt;
    
            }
            
        }
        
        return ans;
    }
    
    
    
};