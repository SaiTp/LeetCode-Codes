class Solution {
public:
    int minimumCost(vector<int>& cost) {
     sort(cost.begin(),cost.end());
     int res=0;
        for(int i=cost.size()-1;i>=2;i-=3)
        {
            res+=cost[i]+cost[i-1];
        }
        int t=cost.size()%3;
        for(int i=0;i<t;i++)
            res+=cost[i];
        return res;
    }
};