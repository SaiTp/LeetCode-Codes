class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=rocks.size();
        vector<int>v(n);
        for(int i=0;i<n;i++)
            v[i]=capacity[i]-rocks[i];
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                ans++;
                continue;
            }
            if(v[i]<=additionalRocks)
            {
                additionalRocks-=v[i];
                ans++;
            }
            else
                break;
        }
        return ans;
    }
};