class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>res;
        unordered_map<int,int>mp;
        for(auto i:edges)
            mp[i[1]]++;
        for(int i=0;i<n;i++)
        {
            if(mp[i]==0)
                res.push_back(i);
        }
        return res;
    }
};