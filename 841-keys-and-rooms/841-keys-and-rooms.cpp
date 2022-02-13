class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        vis[0]=true;
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int t=q.front();
            vis[t]=true;
            q.pop();
            int c=rooms[t].size();
            for(int i=0;i<c;i++)
            {
                if(!vis[rooms[t][i]])
                q.push(rooms[t][i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
                return false;
        }
        return true;
    }
};