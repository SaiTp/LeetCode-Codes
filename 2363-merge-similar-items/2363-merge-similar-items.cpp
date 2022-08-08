class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        unordered_map<int,int>mp1,mp2;
        vector<vector<int>>res;
        for(auto i:items1)
            mp1[i[0]]=i[1];
        for(auto i:items2)
            mp2[i[0]]=i[1];
        for(auto i:items1)
        {
            res.push_back({i[0],i[1]+mp2[i[0]]});
        } 
        for(auto i:items2)
            if(mp1.find(i[0])==mp1.end())
                res.push_back({i[0],i[1]});
        sort(res.begin(),res.end());
        return res;
    }
};