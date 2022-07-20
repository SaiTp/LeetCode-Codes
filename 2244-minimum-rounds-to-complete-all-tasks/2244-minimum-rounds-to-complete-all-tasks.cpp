class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        int n=tasks.size();
        if(n<2)
            return -1;
        for(auto i:tasks)
            mp[i]++;
        int ans=0;
        for(auto i: mp)
        {
            // cout<<i.first<<" "<<i.second<<endl;
            if(i.second==1)
                return -1;
            if(i.second%3==0)
            {
                ans+=i.second/3;
            }
            else
            {
                while(i.second>4)
                {
                    ans++;
                    i.second-=3;
                }
                if(i.second==4)
                    ans+=2;
                else if (i.second==3 || i.second==2)
                    ans++;
                else
                    return -1;
            }
        }
        return ans;
    }
};