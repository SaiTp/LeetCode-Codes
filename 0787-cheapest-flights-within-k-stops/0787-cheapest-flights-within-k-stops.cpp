class Solution {
public:
     int solve(vector<vector<pair<int, int>>>& adj, vector<vector<int>>&dp, int& target, int maxFlightsAllowed, int curr)
    {
        if (curr == target) return 0;
        if (maxFlightsAllowed == 0) return INT_MAX;
        if (dp[curr][maxFlightsAllowed] != -1) return dp[curr][maxFlightsAllowed];
        
        int mnPrice = INT_MAX;
        for (pair<int, int>& adjNode : adj[curr])
        {
            int nextStop = adjNode.first;
            int flightPrice = adjNode.second;
            if (flightPrice == -1) continue; //already visited node
            
            adjNode.second = -1; //mark visited
            //====================================================================
            int priceToTarget = solve(adj, dp, target, maxFlightsAllowed - 1, nextStop);
            int totalPrice = (priceToTarget == INT_MAX)? INT_MAX : flightPrice + priceToTarget;
            mnPrice = min(mnPrice, totalPrice);
            //=======================================================================
            adjNode.second = flightPrice; //unmark visited
        }
        return dp[curr][maxFlightsAllowed] = mnPrice;
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) 
    {
        vector<vector<pair<int, int>>>adj(n);
        for (vector<int>&flight : flights) adj[flight[0]].push_back({flight[1], flight[2]});
        
        k++; //flightsAllowed = stopsAllowed(k) + 1
        vector<vector<int>>dp(n, vector<int>(k + 1, -1));
        int bestPrice = solve(adj, dp, dst, k, src);
        return (bestPrice == INT_MAX? -1 : bestPrice);
    }
};