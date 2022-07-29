class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end(),greater<int>());
        int n=piles.size();
        int c=1,ans=0;
        for(int i=1;c<=n/3 && i<n;i+=2)
        {
            ans+=piles[i];
            c++;
        }
        return ans;
    }
};