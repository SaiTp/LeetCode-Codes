class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int s=rolls.size();
        int sum=mean*(n+s);
        for(auto i :rolls)
            sum-=i;
        if(sum>n*6)
            return {};
        if(sum<=0)
            return {};
        // cout<<sum;
        if(sum<n)
            return {};
        vector<int>res(n);
        int t=sum/n;
        
        for(int i=0;i<n;i++)
        {
            res[i]=t;
        }
        t=sum%n;
        for(int i=0;t-- && i<n;i++)
            res[i]++;
        return res;
    }
};