class Solution {
public:
    int minDeletions(string s) {
        vector<int>mp(26,0);
        int ans=0;
        for(auto i:s)
            mp[i-'a']++;
        sort(mp.begin(),mp.end(),greater<int>());
        // for(auto i:mp)
        //     cout<<i<<" ";
        for(int i=0;i<mp.size()-1;i++)
        {
            if(mp[i]==0)
                break;
            for(int j=i+1;j<mp.size();j++)
            {
                if(mp[i]==mp[j])
                {
                    ans+=1;
                    mp[j]--;
                }
                else
                    break;
            }
        }
        return ans;
    }
};