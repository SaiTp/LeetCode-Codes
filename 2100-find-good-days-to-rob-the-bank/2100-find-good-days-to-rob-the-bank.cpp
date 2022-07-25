class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n=security.size();
        vector<int>nd(n,0);
        vector<int>ni(n,0);
        for(int i=1;i<n;i++) //non-increasing
        {
            if(security[i-1]>=security[i])
                ni[i]=ni[i-1]+1;
        }
        for(int i=n-2;i>=0;i--) //non-decreasing
        {
            if(security[i+1]>=security[i])
                nd[i]=nd[i+1]+1;
        }
        // for(auto i:ni)
        //     cout<<i<<" ";
        // cout<<endl;
        // for(auto i:nd)
        //     cout<<i<<" ";
        vector<int>ans;
        for(int i=0;i<n;i++)
            if(ni[i]>=time && nd[i]>=time)
                ans.push_back(i);
        return ans;
    }
};