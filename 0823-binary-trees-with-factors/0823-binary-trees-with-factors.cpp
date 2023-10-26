class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<int,long long int>mp;
        for(auto i:arr)
            mp[i]++;
        for(int i=1;i<n;i++)
        {
            long long int c=0;
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j]==0)
                {
                    if(mp.find(arr[i]/arr[j])!=mp.end())
                        c+=mp[arr[i]/arr[j]]*mp[arr[j]];
                }
            }
            mp[arr[i]]+=c;
        }
        long long int sol=0;
        for(auto i:mp)
            sol+=i.second;
        return sol%1000000007;
    }
};