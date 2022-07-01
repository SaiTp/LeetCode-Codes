class Solution {
public:
    vector<int> getRow(int n) {
        vector<int>v(n+1);
        v[0]=1;
        for(int i=1;i<=n;i++)
        {
          v[i]=(long long)v[i-1]*(n+1-i)/i;
        }
        return v;
    }
};