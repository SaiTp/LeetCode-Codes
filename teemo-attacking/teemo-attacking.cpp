class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        if(n==0)
            return 0;
        int t=0;
        for(int i=0;i<n-1;i++)
            t+=min(timeSeries[i + 1] - timeSeries[i], duration);
        return t+duration;
    }
};