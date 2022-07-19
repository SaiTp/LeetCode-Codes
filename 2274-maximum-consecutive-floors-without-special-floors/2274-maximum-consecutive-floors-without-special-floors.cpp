class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int ans=0;
        sort(special.begin(),special.end());
        int n=special.size();
        for(int i=1;i<n;i++)
        {
            ans=max(ans, abs(special[i]-special[i-1]-1));
        }
        ans = max(ans, max(special[0] - bottom, top - special[n-1]));
        return ans;
    }
};