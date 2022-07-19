class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int>v(32,0);
        int n=candidates.size();
        for(int i=0;i<32;i++)
        {
            long long int t=1<<i;
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(candidates[j] & t)
                    c++;
            }
            v[i]=c;
        }
        int ans=0;
        for(int i=0;i<32;i++)
        {
            if(ans<v[i])
                ans=v[i];
        }
        return ans;
    }
};